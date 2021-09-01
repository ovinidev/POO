#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H

#include "Conta.h"
#include "Transacao.h"

#include <iostream>
using std::cout;
using std::endl;

class ContaPoupanca : public Conta
{
public:
  ContaPoupanca(int aniversarioConta, int numDaConta, string nome, double saldo): Conta(numDaConta, nome, saldo){}

  virtual void deposito(double valor)
  {

    this->saldo += valor;


    cont++;
  }

  virtual void retirada(double valor)
  {
    valor = valor * -1;


    this->saldo -= valor;


    cont++;
  }

  virtual void print()
  {
    cout << this->aniversarioConta << endl;
    cout << this->nome << endl;
    cout << this->saldo << endl;
    cout << this->numDaConta << endl;
  }

private:
  int aniversarioConta;
};

#endif