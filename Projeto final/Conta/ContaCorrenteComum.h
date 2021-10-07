#ifndef CONTACORRENTECOMUM_H
#define CONTACORRENTECOMUM_H

#include "Conta.h"
#include "../Transacao/Transacao.h"
#include "../Pessoa/Pessoa.h"

#include <iostream>
using std::cout;
using std::endl;

class ContaCorrenteComum : public Conta
{
public:
  ContaCorrenteComum(Pessoa &, int, double);

  virtual void operator<<(double valor);
  virtual void operator>>(double valor);

  virtual void print() const;

  virtual void transfere(double, Conta &);
};

#endif