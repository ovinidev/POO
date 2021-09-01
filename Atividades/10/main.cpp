#include <iostream>

#include "Conta.h"
#include "ContaPoupanca.h"
#include "ContaCorrenteComLimite.h"
#include "ContaCorrenteComum.h"

int main()
{

  Conta *contas[] = {
      new ContaPoupanca(20, 1221, "Juca", 700.00),
      new ContaCorrenteComum(1221, "Jesus", 700.00),
      new ContaCorrenteComLimite(400.00, 1221, "Peep", 700.00),

  };
  for (int i = 0; i < 3; i++)
  {
    contas[i]->retirada(500.00);
    contas[i]->print();
  }

  return 0;
}