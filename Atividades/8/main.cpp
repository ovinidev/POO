#include <iostream>
using std::cout;
using std::endl;

#include "Retangulo.h"


int main() {
  Retangulo bloco(10.0, 15.0);

  bloco.calculaArea();
  bloco.calculaPerimetro();

  bloco.getLargura();

  return 0;
}