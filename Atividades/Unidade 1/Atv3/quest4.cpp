#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

void swap(int *x, int *y)
{
  int aux = *y;
  *y = *x;

  *x = aux;
}

int main()
{
  int x = 5, y = 8;

  swap(&x, &y);

  cout << x << ' ' << y << endl;

  return 0;
}
