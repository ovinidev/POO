#include <iostream>
using std::cin;
using std::cout;
using std::endl;

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

struct TIPOS_DADOS
{
  char tipoDeDado[30];
  int dado;
};

TIPOS_DADOS dados[8] = {
    {"int", sizeof(int)},
    {"double", sizeof(double)},
    {"short", sizeof(short)},
    {"long", sizeof(long)},
    {"char", sizeof(char)},
    {"bool", sizeof(bool)},
    {"float", sizeof(float)},
    {"long double", sizeof(long double)}};

bool salvaDados(TIPOS_DADOS c[], int n)
{
  ofstream fout("tiposDeDados.dat", std::ios::out);

  if (!fout)
    return false;

  for (int i = 0; i < n; i++)
    fout << c[i].dado << ' ' << c[i].tipoDeDado << ' ' << endl;

  fout.close();

  return true;
}

bool exibeDados()
{
  ifstream fin("tiposDeDados.dat", std::ios::in);

  if (!fin)
    return false;

  TIPOS_DADOS c;

  cout << "VALOR EM BYTE "
       << "      TIPO DE DADO     " << endl;

  cout << fixed;
  while (fin >> c.dado >> c.tipoDeDado)
  {
    cout << setw(6) << c.dado << ' ' << setw(20) << right << c.tipoDeDado << ' ' << setw(8) << right << endl;
  }
  cout << defaultfloat;

  fin.close();

  return true;
}

int main()
{
  salvaDados(dados, 8);

  exibeDados();

  return 0;
}