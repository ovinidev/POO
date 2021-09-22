#include <iostream>
using std::cout;
using std::endl;

#include "Time.h"

int main() {
  Time t(22,58,59);

  t.printUniversal();

  cout << "Adicionando 1 segundo: " << endl;
  t.tick();
  t.printUniversal();

  cout << "Adicionando 1 segundo: " << endl;
  t.tick();
  t.printUniversal();

  cout << "Adicionando 1 segundo: " << endl;
  t.tick();
  t.printUniversal();


  return 0;
}