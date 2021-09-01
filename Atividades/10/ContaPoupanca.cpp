#include "ContaPoupanca.h"

#include "Transacao.h"

#include <iostream>
using std::cout;
using std::endl;

ContaPoupanca::ContaPoupanca(int aniversarioConta, int numDaConta, string nome, double saldo) : 
Conta(numDaConta, nome, saldo), aniversarioConta(aniversarioConta) {}

void ContaPoupanca::deposito(double valor)
{
  this->saldo += valor;

  Transacao lista("22/07", valor, valor > 0 ? "credito" : "debito");

  this->listaDeTransacao[this->cont] = lista;

  cont++;
}

void ContaPoupanca::retirada(double valor)
{
  this->saldo -= valor;

  valor = valor * -1;

  Transacao lista("22/07", valor, valor > 0 ? "credito" : "debito");

  this->listaDeTransacao[this->cont] = lista;

  cont++;
}

void ContaPoupanca::print() const
{
  cout << this->aniversarioConta << endl;
  cout << this->nome << endl;
  cout << this->saldo << endl;
  cout << this->numDaConta << endl;

  for (int i = 0; i < this->cont ; i++) {
    cout << this->listaDeTransacao[i].getData() << endl;
    cout << this->listaDeTransacao[i].getValor() << endl;
    cout << this->listaDeTransacao[i].getDescricao() << endl;
  }
}