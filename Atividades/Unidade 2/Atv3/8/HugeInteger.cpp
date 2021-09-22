#include "HugeInteger.h"

#include <iostream>
using std::cout;
using std::endl;
using std::ostream;

#include <ostream>
#include <cstring>
#include <cctype>

#define MAX(a, b) ((a > b) ? a : b)

HugeInteger::HugeInteger(const char *n)
{
  input(n);
}

void HugeInteger::input(const char *n)
{
  if (validar(n))
  {
    tam = strlen(n);

    //armazenando número ao contrário
    for (int i = strlen(n) - 1; i >= 0; i--)
      num[tam - i - 1] = n[i];
  }
  else
  {
    tam = 1;
    num[0] = '0';
  }
}

void HugeInteger::output() const
{
  for (int i = tam - 1; i >= 0; i--)
    cout << num[i];
}

void HugeInteger::add(const HugeInteger &obj)
{
  int vaiUm = 0, num1, num2, tRes;

  for (int i = 0; i < MAX(tam, obj.tam); i++)
  {
    //converte para inteiros
    num1 = (i < tam) ? num[i] - '0' : 0;
    num2 = (i < obj.tam) ? obj.num[i] - '0' : 0;

    //soma
    tRes = num1 + num2 + vaiUm;

    //calcula o vai um
    vaiUm = tRes / 10;

    //calcula o valor que fica
    num[i] = (tRes % 10) + '0';
  }

  tam = MAX(tam, obj.tam);

  if (vaiUm)
    num[tam++] = vaiUm + '0';
}

bool HugeInteger::validar(const char *n)
{
  if (strlen(n) == 0 || strlen(n) > 40)
    return false;

  for (int i = 0; i < strlen(n); i++)
    if (!isdigit(n[i]))
      return false;

  return true;
}

bool HugeInteger::isEqualTo(const HugeInteger &obj) const
{
  if (tam != obj.tam)
    return false;

  for (int i = 0; i < tam; i++)
    if (num[i] != obj.num[i])
      return false;

  return true;
}

bool HugeInteger::isGreaterThan(const HugeInteger &obj) const
{
  if (tam > obj.tam)
    return true;

  if (tam < obj.tam)
    return false;

  for (int i = tam - 1; i >= 0; i--)
  {
    if (num[i] < obj.num[i])
      return false;

    if (num[i] > obj.num[i])
      return true;
  }

  return false;
}

const HugeInteger &HugeInteger::operator+(const HugeInteger &obj){
  this->add(obj);

  return *this;
}

const HugeInteger &HugeInteger::operator+=(const HugeInteger &obj){
  this->add(obj);

  return *this;
}


const HugeInteger &HugeInteger::operator=(const HugeInteger &obj){
  this->input(obj.num);

  return *this;
}

bool HugeInteger::operator==(const HugeInteger obj){
  return isEqualTo(obj);
}

bool HugeInteger::operator!=(const HugeInteger obj){
  return isNotEqualTo(obj);
}

bool HugeInteger::operator>(const HugeInteger obj){
  return isGreaterThan(obj);
}

bool HugeInteger::operator<(const HugeInteger obj){
  return isLessThan(obj);
}

bool HugeInteger::operator>=(const HugeInteger obj){
  return isGreaterThanOrIqual(obj);
}

bool HugeInteger::operator<=(const HugeInteger obj){
  return isLessThanOrIqual(obj);
}

ostream &operator<<(ostream &out, const HugeInteger &obj)
{
  
  for (int i = obj.tam - 1; i >= 0; i--)
    out << obj.num[i];

  return out;
}