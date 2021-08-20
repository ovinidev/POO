#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include "Array.h"

int main() {
  Array a1(3);
  Array a2(2);

  cin >> a1;
  cin >> a2;
  cout << a1;   //escrevendo array
  cout << a2;   //escrevendo array

  cout << "Concatenando a1 com a2" << endl;

  Array a5 = a1 + a2;

  cout << a5;

  cout << "Somando a1 com a2" << endl;

  a1 += a2;

  cout << a1;


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