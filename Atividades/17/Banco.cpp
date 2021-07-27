#include <iostream>
using std::cerr;
using std::cout;
using std::endl;

#include "Banco.h"

//Implementação

ContaBanco::ContaBanco(double saldo)
{ //modificação 1
  setSaldo(saldo);
}

void ContaBanco::setSaldo(double Saldo)
{ //modificação 2
  if (Saldo >= 0)
  {
    saldo = Saldo;
  }
  else
  {
    saldo = 0;
  }
}

double ContaBanco::getSaldo()
{
  return saldo;
}

void ContaBanco::displaySaldo()
{
  cout << "Saldo R$" << getSaldo() << endl;
}

void ContaBanco::creditar(double quantia)
{
  cout << "Adicionando R$" << quantia << endl;

  setSaldo(getSaldo() + quantia);
}

void ContaBanco::debitar(double quantia)
{
  if (quantia > saldo)
  {
    cerr << "Saldo insuficiente" << endl;
  }
  else
  {
    cout << "Retirando R$" << quantia << endl;

    setSaldo(getSaldo() - quantia);
  }
}
