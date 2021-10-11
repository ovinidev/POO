#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H

#include "Conta.h"
#include "../Transacao/Transacao.h"
#include "../Pessoa/Pessoa.h"

#include <iostream>
using std::cout;
using std::endl;

class ContaPoupanca : public Conta
{
public:
  ContaPoupanca(int, Pessoa &, double, int);

  virtual void operator<<(double valor);
  virtual void operator>>(double valor);

  virtual void print() const;

  virtual void transfere(double, Conta &);

private:
};

#endif