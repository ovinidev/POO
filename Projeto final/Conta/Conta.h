#ifndef CONTA_H
#define CONTA_H

#include <string>
#include "../Pessoa/Pessoa.h"
#include "../Transacao/Transacao.h"

#include <vector>
using std::vector;

using std::string;

class Conta
{
public:
  Conta(int, Pessoa &, double);
  Conta();

  virtual void print() const;

  virtual void operator<<(double){};
  virtual void operator>>(double){};

  virtual void transfere(double, Conta &){};

  virtual int getNumeroDaConta() { return this->numDaConta; }
  virtual Pessoa getNomeCorrentista() { return *this->nomeCorrentista; }
  virtual double getSaldo() { return this->saldo; }

protected:
  Pessoa *nomeCorrentista;
  vector<Transacao> listaDeTransacao;
  int cont = 0;
  double saldo;
  int numDaConta;
};

#endif