#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include "Array.h"

int main() {
  Array a1(5);  //array de 7 elementos
  Array a2(2);  //array de 10 elementos

  cin >> a1;
  cin >> a2;
  cout << a1;   //escrevendo array
  cout << a2;   //escrevendo array

  cout << "Concatenando a1 com a2" << endl;

  Array a5 = a1 + a2;

  cout << a5;

  cout << a1;   //escrevendo array
  cout << a2;   //escrevendo array

  cout << "somando a1 com a2" << endl;

  a1 += a2;

  cout << a1;

  Array a4(a1);

  cout << a4;

  if (a1 == a2)
    cout << "a1 e a2 são iguais" << endl;

  Array a3(a1);

  a3[0] = 100; //invoca int &operator[](int)

  cout << "a3[0] == " << a3[0] << endl;  //int operator[](int) const

  a2 = a3;

  cout << "a2[0] == " << a3[0] << endl;

  a2[100] = 50;

  return 0;
}