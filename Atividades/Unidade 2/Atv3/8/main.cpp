#include <iostream>
using std::cout;
using std::endl;

#include "HugeInteger.h"

int main() {
  HugeInteger h1("7974");
  cout << h1 << endl;

  HugeInteger h2("9784");
  cout << h2 << endl;

  if (h1 < h2) {
    cout << "h1 " << "<" << " h2" << endl;
  }

  if (h1 > h2) {
    cout << "h1 " << ">" << " h2" << endl;
  }

  if (h1 <= h2) {
    cout << "h1 " << "<=" << " h2" << endl;
  }

  if (h1 >= h2) {
    cout << "h1 " << ">=" << " h2" << endl;
  }

  if (h1 == h2) {
    cout << "h1 " << "==" << " h2" << endl;
  }

  if (h1 != h2) {
    cout << "h1 " << "!=" << " h2" << endl;
  }

  cout << "h1 = "; 
  h1.output();
  cout << endl << "h2 = ";
  h2.output();
  cout << endl;

  cout << "h1 += h2" << endl;

  h1 += h2;

  cout << "h1 = ";

  h1.output();
  cout << endl;

  cout << "h3 = h1 + h2" << endl;

  HugeInteger h3 = h1 + h2;

  cout << "h3 = ";

  h3.output();
  cout << endl;

  HugeInteger h4 = "5000";

  cout << "h4 = ";
  h4.output();
  cout << endl;







  return 0;
}