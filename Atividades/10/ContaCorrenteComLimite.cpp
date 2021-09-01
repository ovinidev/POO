#include "ContaCorrenteComLimite.h"

#include "Transacao.h"

#include <iostream>
using std::cout;
using std::endl;

ContaCorrenteComLimite::ContaCorrenteComLimite(double limite, int numDaConta, string nome, double saldo) : Conta(numDaConta, nome, saldo), limite(limite) {}

void ContaCorrenteComLimite::deposito(double valor)
{
  Transacao lista("22/07", valor, valor > 0 ? "credito" : "debito");

  this->saldo += valor;

  this->listaDeTransacao[this->cont] = lista;

  cont++;
}

void ContaCorrenteComLimite::retirada(double valor)
{
  if (saldo + limite >= valor)
  {
    this->saldo -= valor;
    cout << "oi" << endl;
  }
  else
  {
    cout << "Limite de retirada atingido!" << endl;
    return;
  }

  valor = valor * -1;

  Transacao lista("22/07", valor, valor > 0 ? "credito" : "debito");

  this->listaDeTransacao[this->cont] = lista;

  cont++;
}

void ContaCorrenteComLimite::print() const
{
  cout << this->limite << endl;
  cout << this->nome << endl;
  cout << this->saldo << endl;
  cout << this->numDaConta << endl;

  for (int i = 0; i < this->cont; i++)
  {
    cout << this->listaDeTransacao[i].getData() << endl;
    cout << this->listaDeTransacao[i].getValor() << endl;
    cout << this->listaDeTransacao[i].getDescricao() << endl;
  }
}