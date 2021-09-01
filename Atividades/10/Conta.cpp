#include "Conta.h"

#include <iostream>
using std::cout;
using std::endl;

Conta::Conta(int numDaConta, string nome, double saldo){
  this->numDaConta = numDaConta;
  this->nome = nome;
  this->saldo = saldo;
}
