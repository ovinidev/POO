#include <iostream>
using std::cout;
using std::endl;

#include "HugeInteger.h"


int main() {

  HugeInteger test;
  HugeInteger test2;

  
  test.input("999");
  test2.input("999");
  test.output();
  test2.output();

  test.add(test2);
  test.output();
  
  // cout << "== " << test.isEqualTo(test2) << endl;
  // cout << "!= " << test.isNotEqualTo(test2) << endl;
  // cout << "> " << test.isGreaterThan(test2) << endl;
  // cout << "< " << test.isLessThan(test2) << endl;
  // cout << ">= " << test.isGreaterThanOrIqual(test2) << endl;
  // cout << "<= " << test.isLessThanOrIqual(test2) << endl;

  return 0;
}