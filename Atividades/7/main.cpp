#include <iostream>
#include "Fila.h"

int main()
{
  Fila<int> *numeros = new Fila<int>;

  for(int i = 0; i <= 10; i++)
    numeros->insereElementos(i + 10);

  std::cout << std::endl;

  numeros->print();

  for(int i = 0; i <= 10; i++)
    numeros->retiraElementos();

  system("PAUSE");
  return 0;
}
