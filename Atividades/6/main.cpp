#include <iostream>
using std::cout;
using std::endl;

#include "Time.h"

//o uso de métodos inline não alteram a lógica do programa

int main() {
  Time t(22,58,59);

  t.printUniversal();

  t.tick();

  t.printUniversal();


  return 0;
}