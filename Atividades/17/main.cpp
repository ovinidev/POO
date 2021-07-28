#include "Banco.h"

int main() {
  
  ContaBanco contaVictor(100.00);

  ContaBanco contaBivar(120.00);

  contaVictor.mostrarSaldo();

  contaVictor.creditar(55);
  contaVictor.mostrarSaldo();

  contaVictor.debitar(20);
  contaVictor.mostrarSaldo();

  contaBivar.mostrarSaldo();

  contaBivar.creditar(90);
  contaBivar.mostrarSaldo();

  contaBivar.debitar(10);
  contaBivar.mostrarSaldo();

  return 0;
}