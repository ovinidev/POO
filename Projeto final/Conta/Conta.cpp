#include "Conta.h"
#include "../Pessoa/Pessoa.h"

#include <iostream>
using std::cout;
using std::endl;

Conta::Conta(int numDaConta, Pessoa &nomeCorrentista, double saldo){
  this->numDaConta = numDaConta;
  this->nomeCorrentista = &nomeCorrentista;
  this->saldo = saldo;
}
