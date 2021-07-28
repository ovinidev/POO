#include "Cupom.h"

int main() {
  
  Cupom produto1("151262", "Mouse", 5, 100.60);
  Cupom produto2("155412", "Teclado", 4, -300.50);
  Cupom produto3("484512", "Fone", -8, 180.80);
  Cupom produto4("151561", "Cadeira", 1, 1100.50);

  produto1.exibirCupom();

  produto1.calculaCupom();

  produto2.exibirCupom();

  produto2.calculaCupom();

  produto3.exibirCupom();

  produto3.calculaCupom();

  produto4.exibirCupom();

  produto4.calculaCupom();

  return 0;
}