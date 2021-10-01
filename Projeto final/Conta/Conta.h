#ifndef CONTA_H
#define CONTA_H

#include <string>
#include "../Pessoa/Pessoa.h"
#include "../Transacao/Transacao.h"

using std::string;

class Conta
{
public:
  Conta(int, Pessoa &,double );

  virtual void deposito(double=0) = 0;
  virtual void retirada(double=0) = 0;
  virtual void print() const = 0;


protected:
  Pessoa *nomeCorrentista;
  Transacao listaDeTransacao[100];
  int cont = 0;
  double saldo;
  int numDaConta;

};

#endif