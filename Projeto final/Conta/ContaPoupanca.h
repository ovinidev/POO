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
  ContaPoupanca(int, int, Pessoa &, double);

  virtual void operator<<(double valor);
  virtual void operator>>(double valor);

  virtual void print() const;

private:
  int aniversarioConta;
};

#endif