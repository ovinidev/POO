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

struct D_CONTA
{
  int numDoRegistro;
  char nomeDaFerramenta[20];
  double preco;
  int quantidade;
};

int tFerramentas = 0;

bool listarFerramentas(std::fstream &f)
{
  D_CONTA c;

  cout << " N DO REGISTRO "
       << "      FERRAMENTA     "
       << "   QUANTIDADE  "
       << "PREÇO (R$)" << endl;

  cout << fixed;
  f.clear();

  //posiciona "ponto de leitura" para o byte 0
  f.seekg(0);
  while (true)
  {
    f.read(reinterpret_cast<char *>(&c), sizeof(D_CONTA));

    if (f.eof())
      break;

    cout << setw(7) << c.numDoRegistro << ' ' << setw(20) << right << c.nomeDaFerramenta << ' ' << setw(15) << right << setprecision(2) << c.quantidade << ' ' << setw(10) << right << setprecision(2) << c.preco <<  endl;
  }
  cout << defaultfloat;

  return true;
}

bool cadastrarFerramenta(std::fstream &f, D_CONTA &c)
{
  D_CONTA ant;

  f.clear();
  f.seekg((tFerramentas - 1) * sizeof(D_CONTA));

  f.read(reinterpret_cast<char *>(&ant), sizeof(D_CONTA));

  c.numDoRegistro++;

  f.seekp(tFerramentas * sizeof(D_CONTA));

  f.write(reinterpret_cast<char *>(&c), sizeof(D_CONTA));

  f.flush();

  tFerramentas++;

  return true;
}

int contar_registros(std::fstream &f)
{
  D_CONTA c;
  int toR = 0;

  f.clear();
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

bool removerFerramenta(std::fstream &f, int valor)
{
  D_CONTA c;

  f.clear();
  f.seekg((valor - 1) * sizeof(D_CONTA));

  f.read(reinterpret_cast<char *>(&c), sizeof(D_CONTA));


  f.seekp((valor - 1) * sizeof(D_CONTA));

  f.write(reinterpret_cast<char *>(&c), sizeof(D_CONTA));

  f.flush();
  return true;
}

bool valida(int n_conta)
{
  return ((n_conta % 100) == 0) && ((n_conta / 100 >= 1) && (n_conta / 100 <= tFerramentas));
}

int main()
{
  std::fstream fileIO("dados.dat", std::ios::out | std::ios::in);

  if (!fileIO)
    return 1;

  tFerramentas = contar_registros(fileIO);

  while (1)
  {
    cout << "--------------------------------------------------" << endl;
    cout << "Ferramentas." << endl;
    cout << "Opções:" << endl;
    cout << "0 - Listar Todos as ferramentas" << endl;
    cout << "1 - Cadastrar nova ferramenta" << endl;
    cout << "2 - Remover ferramenta" << endl;
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

      cout << "QUANTIDADE DE FERRAMENTA " << tFerramentas << endl;
      cadastrarFerramenta(fileIO, c);
      break;
    }
    case 2:
    {
      int numReg;
      cout << "numero: " << numReg << endl;
      cout << "Entre com o num do registro: ";
      cin >> numReg;
        removerFerramenta(fileIO, numReg);
      break;
    }

    case -1:
      fileIO.close();
      exit(0);
      break;

    default:
      break;

      return 0;
    }
  }
}