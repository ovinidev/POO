#include "ContaCorrenteComum.h"

#include "Transacao.h"

#include <iostream>
using std::cout;
using std::endl;

ContaCorrenteComum::ContaCorrenteComum(int numDaConta, string nome, double saldo) : Conta(numDaConta, nome, saldo) {}

void ContaCorrenteComum::deposito(double valor)
{
  this->saldo += valor;

  Transacao lista("22/07", valor, valor > 0 ? "credito" : "debito");

  this->listaDeTransacao[this->cont] = lista;

  cont++;
}

void ContaCorrenteComum::retirada(double valor)
{
  this->saldo -= valor;

  valor = valor * -1;

  Transacao lista("22/07", valor, valor > 0 ? "credito" : "debito");

  this->listaDeTransacao[this->cont] = lista;

  cont++;
}

void ContaCorrenteComum::print() const
{
  cout << this->nome << endl;
  cout << this->numDaConta << endl;
  cout << this->saldo << endl;

  for (int i = 0; i < this->cont; i++)
  {
    cout << this->listaDeTransacao[i].getData() << endl;
    cout << this->listaDeTransacao[i].getValor() << endl;
    cout << this->listaDeTransacao[i].getDescricao() << endl;
  }
}