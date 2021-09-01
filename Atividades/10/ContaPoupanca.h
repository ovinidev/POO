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
  ContaPoupanca(int, int, string, double);


  virtual void deposito(double=0);
  virtual void retirada(double=0);
  virtual void print() const;

private:
  int aniversarioConta;
};

#endif