#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;

#include "Array.h"

int main() {
  Array<double> a1(7);  //array de 7 elementos
  Array<double> a2;     //array de 10 elementos

  cin >> a1;    //lendo array 

  cout << a1;   //escrevendo array

  if (a1 == a2)
    cout << "a1 e a2 são iguais";

  Array<double> a3(a1);

  a3[5] = 100; //invoca int &operator[](int)

  cout << "a3[5] == " << a3[5] << endl;  //int operator[](int) const

  a2 = a3;

  cout << "a2[5] == " << a3[5] << endl;

  a2[100] = 50;

  return 0;
}