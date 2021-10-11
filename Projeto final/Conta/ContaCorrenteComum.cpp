#include "ContaCorrenteComum.h"

#include "../Transacao/Transacao.h"
#include "../Pessoa/Pessoa.h"
#include "../Erros/SaldoInsuficiente.h"

#include <iostream>
using std::cerr;
using std::cout;
using std::endl;

ContaCorrenteComum::ContaCorrenteComum(int numDaConta, Pessoa &nomeCorrentista, double saldo) : Conta(numDaConta, nomeCorrentista, saldo) {}

void ContaCorrenteComum::operator<<(double valor)
{
  if (valor > 0)
  {
    this->saldo += valor;
  }

  Transacao lista("22/07", valor, valor > 0 ? "credito" : "debito");

  this->listaDeTransacao.push_back(lista);

  cont++;
}

void ContaCorrenteComum::operator>>(double valor)
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

void ContaCorrenteComum::print() const
{
  cout << "Nome: " << this->nomeCorrentista->getNome() << endl;
  cout << "Número da conta: " << this->numDaConta << endl;
  cout << "Saldo: $" << this->saldo << endl;
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

void ContaCorrenteComum::transfere(double valor, Conta &conta)
{
  Transacao lista("22/07", valor, "Transferência");
  
  this->listaDeTransacao.push_back(lista);

  cont++;

  conta << valor;

  this->saldo -= valor;
}