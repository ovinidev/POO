#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main() {
  double valor = 100.453627;

  cout << fixed << setprecision(1) << valor << endl;
  cout << fixed << setprecision(2) << valor << endl;
  cout << fixed << setprecision(3) << valor << endl;
  cout << fixed << setprecision(4) << valor << endl;

  return 0;
}