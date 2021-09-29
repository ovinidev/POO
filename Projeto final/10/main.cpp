#include <iostream>

#include "Conta.h"
#include "ContaPoupanca.h"
#include "ContaCorrenteComLimite.h"
#include "ContaCorrenteComum.h"

int main()
{

  Conta *contas[] = {
    new ContaPoupanca(20, 1221, "Juca", 300.00),
    new ContaCorrenteComum(1221, "Jesus", 7100.00),
    new ContaCorrenteComLimite(400.00, 1221, "Peep", 800.00),
  };

  for (int i = 0; i < 3; i++)
  {
    contas[i]->retirada(500.00);
    contas[i]->print();
  }

  contas[0]->deposito(500.00);
  contas[0]->deposito(800.00);
  contas[0]->retirada(200);
  contas[0]->print();



  return 0;
}