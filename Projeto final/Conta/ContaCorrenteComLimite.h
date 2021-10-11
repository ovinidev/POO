#ifndef CONTACORRENTECOMLIMITE_H
#define CONTACORRENTECOMLIMITE_H

#include "Conta.h"
#include "../Transacao/Transacao.h"
#include "../Pessoa/Pessoa.h"

#include <iostream>
using std::cout;
using std::endl;

class ContaCorrenteComLimite : public Conta
{
public:
  ContaCorrenteComLimite(Pessoa &, int, double, double);

  virtual void operator<<(double valor);

  virtual void operator>>(double valor);

  virtual void print() const;

  virtual void transfere(double, Conta &);

private:
};

#endif