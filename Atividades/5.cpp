#include <iostream>
#include <cstring>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main(void)
{
  for (int i = 33; i <= 126; i++)
  {
    cout << i << ": ";
    char ascii = i;
    cout << ascii << endl;
  }

  return 0;
}