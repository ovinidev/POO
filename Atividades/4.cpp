#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main()
{
  int fahrenheit = 120;
  float celsius;

  celsius = 5.0 / 9.0 * (fahrenheit - 32);

  cout << "fahrenheit: ";
  cout << fahrenheit << "ºF" << endl;

  cout << "Celsius: ";
  cout << fixed << setprecision(3) << celsius << "ºC" << endl;


  return 0;
}