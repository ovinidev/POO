#ifndef BANCO_H
#define BANCO_H

#include <string>
using std::string;

//Interface
class ContaBanco
{

public:

  ContaBanco(double saldo);

  void setSaldo(double saldo);

  double getSaldo();

  void mostrarSaldo();

  void creditar(double quantia);

  void debitar(double quantia);

private:
  double saldo;
};

#endif