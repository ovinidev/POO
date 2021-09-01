#ifndef QUADRADO_H
#define QUADRADO_H

#include "Conta.h"
#include "Transacao.h"

#include <iostream>
using std::cout;
using std::endl;

class ContaCorrenteComLimite : public Conta
{
public:
  ContaCorrenteComLimite(double ,int ,string ,double );

  virtual void deposito(double valor);

  virtual void retirada(double valor);

  virtual void print() const;

private:
  double limite;
};

#endif