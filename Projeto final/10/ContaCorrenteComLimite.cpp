#include "ContaCorrenteComLimite.h"

#include "Transacao.h"

#include <iostream>
using std::cout;
using std::endl;

ContaCorrenteComLimite::ContaCorrenteComLimite(double limite, int numDaConta, string nome, double saldo) : Conta(numDaConta, nome, saldo), limite(limite) {}

void ContaCorrenteComLimite::deposito(double valor)
{

  if (valor > 0)
  {
    this->saldo += valor;
  }
  
  Transacao lista("22/07", valor, valor > 0 ? "credito" : "debito");

  this->listaDeTransacao[this->cont] = lista;

  cont++;
}

void ContaCorrenteComLimite::retirada(double valor)
{
  if (saldo + limite >= valor)
  {
    this->saldo -= valor;
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
  cout << "Nome: " << this->nome << endl;
  cout << "Número da conta: " << this->numDaConta << endl;
  cout << "Saldo: $" << this->saldo << endl;
  cout << "Limite: $" << this->limite << endl;

  for (int i = 0; i < this->cont; i++)
  {
    cout << "Data da transação: " << this->listaDeTransacao[i].getData() << endl;
    cout << "Valor da transação: $" << this->listaDeTransacao[i].getValor() << endl;
    cout << "Descrição: " << this->listaDeTransacao[i].getDescricao() << endl;
    cout << endl;
  }
}