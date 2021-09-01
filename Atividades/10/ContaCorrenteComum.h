#ifndef CONTACORRENTECOMUM_H
#define CONTACORRENTECOMUM_H

#include "Conta.h"
#include "Transacao.h"

#include <iostream>
using std::cout;
using std::endl;

class ContaCorrenteComum : public Conta
{
public:
  ContaCorrenteComum(int, string, double);

  virtual void deposito(double = 0);

  virtual void retirada(double = 0);

  virtual void print() const;
};

#endif