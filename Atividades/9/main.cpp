#include <iostream>
using std::cout;
using std::endl;

#include "HugeInteger.h"


int main() {

  HugeInteger var1;
  HugeInteger var2;

  cout << "Exibindo var1:" << endl;
  var1.input("999");
  var1.output();

  cout << "Exibindo var2:" << endl;
  var2.input("999");
  var2.output();

  cout << "Somando var2 em var1... " << endl;
  var1.add(var2);

  cout << "Exibindo var1:" << endl;
  var1.output();

  cout << endl;

  cout << "1 = true e 0 = false" << endl;
  cout << "var1 == var2? " << var1.isEqualTo(var2) << endl;
  cout << "var1 != var2? " << var1.isNotEqualTo(var2) << endl;
  cout << "var1 > var2? " << var1.isGreaterThan(var2) << endl;
  cout << "var1 < var2? " << var1.isLessThan(var2) << endl;
  cout << "var1 >= var2? " << var1.isGreaterThanOrIqual(var2) << endl;
  cout << "var1 <= var2? " << var1.isLessThanOrIqual(var2) << endl;

  return 0;
}