#include "Banco.h"

int main() {
  
  ContaBanco contaVictor(100.00);

  ContaBanco contaBivar(120.00);

  contaVictor.displaySaldo();

  contaVictor.creditar(55);
  contaVictor.displaySaldo();

  contaVictor.debitar(20);
  contaVictor.displaySaldo();

  contaBivar.creditar(90);
  contaBivar.displaySaldo();

  contaBivar.debitar(10);
  contaBivar.displaySaldo();

  return 0;
}