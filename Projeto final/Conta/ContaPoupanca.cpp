#include "ContaPoupanca.h"

#include "../Transacao/Transacao.h"
#include "../Pessoa/Pessoa.h"
#include "../Erros/SaldoInsuficiente.h"

#include <iostream>
using std::cerr;
using std::cout;
using std::endl;

ContaPoupanca::ContaPoupanca(Pessoa &nomeCorrentista, int numDaConta, double saldo, int aniversarioConta) : Conta(numDaConta, nomeCorrentista, saldo)
{
  this->aniversarioConta = aniversarioConta;
}

void ContaPoupanca::operator<<(double valor)
{
  if (valor > 0)
  {
    this->saldo += valor;
  }

  Transacao lista("22/07", valor, valor > 0 ? "credito" : "debito");

  this->listaDeTransacao.push_back(lista);

  cont++;
}

void ContaPoupanca::operator>>(double valor)
{
  try
  {
    if (this->saldo > valor)
    {
      this->saldo -= valor;

      valor = valor * -1;

      Transacao lista("22/07", valor, valor > 0 ? "credito" : "debito");

      this->listaDeTransacao.push_back(lista);

      cont++;
    }
    else
    {
      throw saldoInsuficiente();
    }
  }
  catch (saldoInsuficiente &e)
  {
    cerr << e.what() << endl;
  }
}

void ContaPoupanca::print() const
{
  cout << "Nome: " << this->nomeCorrentista->getNome() << endl;
  cout << "Saldo: $" << this->saldo << endl;
  cout << "Num da conta: " << this->numDaConta << endl;
  cout << "Dia da conta: " << this->aniversarioConta << endl;
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

void ContaPoupanca::transfere(double valor, Conta &conta)
{
  Transacao lista("22/07", valor, "Transferência");

  this->listaDeTransacao.push_back(lista);

  cont++;

  conta << valor;

  this->saldo -= valor;
}