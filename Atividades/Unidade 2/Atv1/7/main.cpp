#include <iostream>
using std::cout;
using std::endl;

#include "Time.h"


int main() {
  Time t(22,58,59);

  t.printUniversal();

  cout << "Exibindo o horário atual: " << endl;
  Time t2;


  return 0;
}