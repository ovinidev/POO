#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::strtol;

#include "HugeInteger.h"

void HugeInteger::input(string numero)
{
  digits = numero.size();

  for (int i = 0; i < static_cast<int>(numero.size()); i++)
  {
    if (!isdigit(numero[i]))
    {
      array[0] = '0';
      digits = 1;
      return;
    }
  }

  for (int j = 0; j < digits; j++)
  {
    array[j] = numero[j];
  }
}

void HugeInteger::output()
{
  for (int j = 0; j < digits; j++)
  {
    cout << array[j];
  }
  cout << endl;
}

void HugeInteger::add(HugeInteger object)
{
  for (int j = 0; j < digits; j++)
  {
    int newArray = array[j] - '0';
    int newArrayObject = object.array[j] - '0';

    char finalArray = (newArray + newArrayObject) + '0';
    array[j] = finalArray;
  }
}