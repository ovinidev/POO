#include <iostream>
using std::cout;
using std::endl;

#include "Retangulo.h"


int main() {
  Retangulo bloco(10.0, 15.0);

  cout << "Exibindo altura: " << bloco.getAltura() << endl;
  cout << "Exibindo largura: " << bloco.getLargura() << endl;
  
  cout << "Calculando área... " << endl;
  bloco.calculaArea();

  cout << "Calculando Perimetro... " << endl;
  bloco.calculaPerimetro();

  cout << endl;

  Retangulo blocoInvalido(23.0, 19.9);

  cout << "Exibindo altura: " << blocoInvalido.getAltura() << endl;
  cout << "Exibindo largura: " << blocoInvalido.getLargura() << endl;
  
  cout << "Calculando área... " << endl;
  blocoInvalido.calculaArea();

  cout << "Calculando Perimetro... " << endl;
  blocoInvalido.calculaPerimetro();

  

  return 0;
}