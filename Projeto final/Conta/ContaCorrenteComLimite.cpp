#include "ContaCorrenteComLimite.h"

#include "../Transacao/Transacao.h"
#include "../Pessoa/Pessoa.h"
#include "../Erros/SaldoInsuficiente.h"

#include <iostream>
using std::cout;
using std::endl;

ContaCorrenteComLimite::ContaCorrenteComLimite(double limite, int numDaConta, Pessoa &nomeCorrentista, double saldo) : Conta(numDaConta, nomeCorrentista, saldo), limite(limite) {}

void ContaCorrenteComLimite::operator<<(double valor)
{

  if (valor > 0)
  {
    this->saldo += valor;
  }

  Transacao lista("22/07", valor, valor > 0 ? "credito" : "debito");

  this->listaDeTransacao.push_back(lista);

  cont++;
}

void ContaCorrenteComLimite::operator>>(double valor)
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
    cout << "Limite de retirada atingido!" << endl;
    return;
  }
}

void ContaCorrenteComLimite::print() const
{
  cout << "Nome: " << this->nomeCorrentista->getNome() << endl;
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