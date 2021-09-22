#include "ContaPoupanca.h"

#include "Transacao.h"

#include <iostream>
using std::cout;
using std::endl;

ContaPoupanca::ContaPoupanca(int aniversarioConta, int numDaConta, string nome, double saldo) : Conta(numDaConta, nome, saldo), aniversarioConta(aniversarioConta) {}

void ContaPoupanca::deposito(double valor)
{
  if (valor > 0)
  {
    this->saldo += valor;
  }

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
  cout << "Nome: " << this->nome << endl;
  cout << "Saldo: $" << this->saldo << endl;
  cout << "Num da conta: " << this->numDaConta << endl;
  cout << "Dia da conta: " << this->aniversarioConta << endl;

  for (int i = 0; i < this->cont; i++)
  {
    cout << "Data da transação: " << this->listaDeTransacao[i].getData() << endl;
    cout << "Valor da transação: $" << this->listaDeTransacao[i].getValor() << endl;
    cout << "Descrição: " << this->listaDeTransacao[i].getDescricao() << endl;
    cout << endl;
  }
}