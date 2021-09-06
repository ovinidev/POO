#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//using std::ios;
using std::defaultfloat;
using std::fixed;

using std::left;
using std::right;

#include <iomanip>
using std::setw;

using std::setprecision;

#include <fstream>
using std::ifstream;
using std::ofstream;

int tContas;

//um registro para organizar dados
struct D_CONTA
{
  int numDoRegistro;
  char nomeDaFerramenta[20];
  double preco;
  int quantidade;
  int status;
};

bool listarFerramentas(std::fstream &f)
{  
  D_CONTA c;

  cout << " N DO REGISTRO " << "      FERRAMENTA     " << "   QUANTIDADE  " << "PREÇO (R$)" << endl;
  
  cout << fixed;
  f.clear();

  //posiciona "ponto de leitura" para o byte 0
  f.seekg(0);
  while (true)
  {
    f.read(reinterpret_cast<char *> (&c),sizeof(D_CONTA));

    if (f.eof())
      break;

    if (!c.status)
      continue;
    
    cout << 
    setw(7) << c.numDoRegistro << ' ' << setw(20) << right << c.nomeDaFerramenta << ' ' << setw(15) << right << setprecision(2) << c.quantidade << ' ' << setw(10) << right << setprecision(2) << c.preco << endl;
  }
  cout << defaultfloat;

  return true;
}

bool cadastrarFerramenta(std::fstream &f, D_CONTA &c)
{
  D_CONTA ant;

  f.clear();
  f.seekg((tContas - 1) * sizeof(D_CONTA));

  f.read(reinterpret_cast<char *>(&ant), sizeof(D_CONTA));

  c.numDoRegistro += 1;
  c.status = 1;

  f.seekp(tContas * sizeof(D_CONTA));

  f.write(reinterpret_cast<char *>(&c), sizeof(D_CONTA));

  //força a escrita imediata no arquivo
  f.flush();

  tContas++;

  return true;
}

int contar_registros(std::fstream &f)
{
  D_CONTA c;
  int toR = 0;

  f.clear();
  //posiciona "ponto de leitura" para o byte 0
  f.seekg(0);
  while (true)
  {
    f.read(reinterpret_cast<char *>(&c), sizeof(D_CONTA));

    if (f.eof())
      break;

    toR++;
  }

  return toR;
}

int main()
{
  std::fstream fileIO("dados.dat", std::ios::out | std::ios::in);

  if (!fileIO)
    return 1;

  tContas = contar_registros(fileIO);

  while (1)
  {
    cout << "---------------------------------------------------------------------" << endl;
    cout << "Ferramentas." << endl;
    cout << "Opções:" << endl;
    cout << "0 - Listar Todos os Clientes" << endl;
    cout << "1 - Cadastrar novo Cliente" << endl;
    cout << endl
         << "-1 - Sair" << endl;
    cout << "Op: ";

    int op;
    cin >> op;

    switch (op)
    {
    case 0:
      listarFerramentas(fileIO);
      break;
    case 1:
    {
      D_CONTA c;
      cout << "Cadastrando nova Ferramenta..." << endl;
      cout << "nomeDaFerramenta: ";
      cin >> c.nomeDaFerramenta;
      cout << "quantidade: ";
      cin >> c.quantidade;
      cout << "preco: ";
      cin >> c.preco;


      cadastrarFerramenta(fileIO, c);
      break;
    }

    case -1:
      fileIO.close();
      exit(0);
      break;

    default:
      //
      break;

      return 0;
    }
  }
}