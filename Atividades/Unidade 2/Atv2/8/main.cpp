#include <iostream>
using std::cout;
using std::endl;

#include "Pessoa.h"

int main() {

  Pessoa p1("Vini", 19, 1.74), p2("Victor", 23, 1.76), p3("Pedro", 18, 1.70);

  p1.print();

  p2.print();

  p3.print();

  return 0;
}