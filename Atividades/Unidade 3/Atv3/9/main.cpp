#include <iostream>
#include "Fila.h"
using std::cout;
using std::endl;
using std::cin;

int main()
{

  cout << "FILA DE INTEIROS: " << endl; 
  cout << endl;

  Fila<int> *inteiros = new Fila<int>;

  for(int i = 0; i <= 10; i++)
    inteiros->insereElementos(i + 10);

  cout << endl;

  inteiros->print();

  for(int i = 0; i <= 10; i++)
    inteiros->retiraElementos();

  cout << endl;

  cout << "FILA DE DOUBLES: " << endl; 
  cout << endl;

  Fila<double> *doublers = new Fila<double>;

  for(int i = 0; i <= 10; i++)
    doublers->insereElementos(i + 1.5);

  cout << endl;

  doublers->print();

  for(int i = 0; i <= 10; i++)
    doublers->retiraElementos();


  return 0;
}
