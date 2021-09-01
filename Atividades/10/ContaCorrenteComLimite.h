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
  ContaCorrenteComLimite(double limite, int numDaConta, string nome, double saldo){}

  virtual void deposito(double valor)
  {
    Transacao lista("22/07", valor, valor > 0 ? "credito" : "debito");

    this->saldo += valor;

    this->listaDeTransacao[this->cont] = lista;

    cont++;
  }

  virtual void retirada(double valor)
  {
    valor = valor * -1;

    Transacao lista("22/07", valor, valor > 0 ? "credito" : "debito");

    if (this->saldo > limite)
    {
      this->saldo -= valor;
    }
    else
    {
      cout << "Limite de retirada atingido!" << endl;
      return;
    }

    this->listaDeTransacao[this->cont] = lista;

    cont++;
  }

  virtual void print()
  {
    cout << this->limite << endl;
    cout << this->nome << endl;
    cout << this->saldo << endl;
    cout << this->numDaConta << endl;
    cout << this->listaDeTransacao << endl;
  }

private:
  double limite;
};

#endif