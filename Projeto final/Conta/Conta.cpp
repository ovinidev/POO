#include "Conta.h"
#include "../Pessoa/Pessoa.h"
#include "../Erros/SaldoInsuficiente.h"

#include <iostream>
using std::cout;
using std::endl;
using std::cerr;

Conta::Conta(int numDaConta, Pessoa &nomeCorrentista, double saldo){
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
