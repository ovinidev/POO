#include <iostream>

#include "Conta.h"
#include "ContaPoupanca.h"
#include "ContaCorrenteComLimite.h"
#include "ContaCorrenteComum.h"

int main() {

  Conta *contas[] = {
  new ContaPoupanca(20, 1221, "Juca", 700.00), 
  };

  contas[0]->print();

  return 0;
}