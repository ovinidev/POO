#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::strtol;

#include "HugeInteger.h"

void HugeInteger::input(string numero)
{
  digits = numero.size();
  size = 0;

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
    size += 1;
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
  for (int j = digits - 1; j >= 0; j--)
  {
    int newArray = array[j] - '0';
    int newArrayObject = (object.array[j] + carry) - '0';
    int soma = newArray + newArrayObject;
    char finalArray = (newArray + newArrayObject) + '0';

    if (soma <= 9)
    {
      array[j] = finalArray;
    }
    else if (soma > 9)
    {
      carry = 0;
      string numeroString(std::to_string(soma));
      char digito1 = numeroString[0];
      char digito2 = numeroString[1];
      array[j] = digito2;
      carry = digito1 - '0';
    }
  }
}

bool HugeInteger::isEqualTo(HugeInteger object)
{
  if (size != object.size)
    return false;

  for (int j = 0; j < digits; j++)
  {
    if (array[j] != object.array[j])
      return false;
  }
  return true;
}

bool HugeInteger::isNotEqualTo(HugeInteger object)
{
  if (size != object.size)
    return true;

  for (int j = 0; j < digits; j++)
  {
    if (array[j] != object.array[j])
      return true;
  }

  return false;
}

bool HugeInteger::isGreaterThan(HugeInteger object)
{
  if (size > object.size)
  {
    return true;
  }
  if (size < object.size)
  {
    return false;
  }

  for (int j = 0; j < digits; j++)
  {
    newArray = array[j] - '0';
    newArrayObject = object.array[j] - '0';

    if (newArray > newArrayObject)
    {
      return true;
    }
    else if (newArray < newArrayObject)
    {
      return false;
    }
  }

  return false;
}

bool HugeInteger::isLessThan(HugeInteger object)
{
  if (size > object.size)
  {
    return true;
  }
  if (size < object.size)
  {
    return false;
  }

  for (int j = 0; j < digits; j++)
  {
    newArray = array[j] - '0';
    newArrayObject = object.array[j] - '0';

    if (newArray < newArrayObject)
    {
      return true;
    }
    else if (newArray > newArrayObject)
    {
      return false;
    }
  }

  return false;
}

bool HugeInteger::isGreaterThanOrIqual(HugeInteger object)
{
  if (isEqualTo(object) || isGreaterThan(object))
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool HugeInteger::isLessThanOrIqual(HugeInteger object)
{
  if (isEqualTo(object) || isLessThan(object))
  {
    return true;
  }
  else
  {
    return false;
  }
}