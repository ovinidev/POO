#include <iostream>
using std::cout;
using std::endl;

#include "HugeInteger.h"


int main() {

  HugeInteger test;
  HugeInteger test2;

  
  test.input("99");
  test2.input("99");
  test.output();
  test2.output();
  test.add(test2);
  test.output();


  return 0;
}