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
  ContaCorrenteComum(int, Pessoa &, double);

  virtual void operator<<(double valor);
  virtual void operator>>(double valor);

  virtual void print() const;
};

#endif