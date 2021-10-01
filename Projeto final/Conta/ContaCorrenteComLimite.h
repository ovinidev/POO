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
  ContaCorrenteComLimite(double ,int ,Pessoa &,double );

  virtual void deposito(double valor);

  virtual void retirada(double valor);

  virtual void print() const;

private:
  double limite;
};

#endif