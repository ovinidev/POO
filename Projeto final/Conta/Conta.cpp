#include "Conta.h"
#include "../Pessoa/Pessoa.h"
#include "../Erros/SaldoInsuficiente.h"
#include "../Erros/LimiteExcedido.h"

#include <iostream>
using std::cerr;
using std::cout;
using std::endl;

Conta::Conta(int numDaConta, Pessoa &nomeCorrentista, double saldo)
{
  this->numDaConta = numDaConta;
  this->nomeCorrentista = &nomeCorrentista;
  this->saldo = saldo;
}

void Conta::print() const
{
  cout << "Nome: " << this->nomeCorrentista->getNome() << endl;
  cout << "Saldo: $" << this->saldo << endl;
  cout << "Num da conta: " << this->numDaConta << endl;
  cout << endl;

  for (int i = 0; i < this->cont; i++)
  {
    if (i == 30)
      break;
    cout << "Data da transação: " << this->listaDeTransacao[i].getData() << endl;
    cout << "Valor da transação: $" << this->listaDeTransacao[i].getValor() << endl;
    cout << "Descrição: " << this->listaDeTransacao[i].getDescricao() << endl;
    cout << endl;
  }
}

void Conta::operator<<(double valor)
{

  if (valor > 0)
  {
    this->saldo += valor;
  }

  Transacao lista("22/07", valor, valor > 0 ? "credito" : "debito");

  this->listaDeTransacao.push_back(lista);

  cont++;
}

void Conta::operator>>(double valor)
{
  try
  {
    if (this->saldo + this->limite >= valor)
    {
      this->saldo -= valor;

      valor = valor * -1;

      Transacao lista("22/07", valor, valor > 0 ? "credito" : "debito");

      this->listaDeTransacao.push_back(lista);

      cont++;
    }
    else
    {
      throw LimiteExcedido();
    }
  }
  catch (LimiteExcedido &e)
  {
    cerr << e.what() << endl;
  }
}