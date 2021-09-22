#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include "Complex.h"

Complex::Complex(int real, int imaginaria)
{
  this->real = real;
  this->imaginaria = imaginaria;
}

void Complex::print() const
{
  cout << this->real << " " << this->imaginaria << endl;
}

const Complex &Complex::operator+(const Complex &obj)
{
  Complex *aux = new Complex(0, 0);

  aux->real = this->real + obj.real;
  aux->imaginaria = this->imaginaria + obj.imaginaria;

  return *aux;
}

const Complex &Complex::operator-(const Complex &obj)
{
  Complex *aux = new Complex(0, 0);

  aux->real = this->real - obj.real;
  aux->imaginaria = this->imaginaria - obj.imaginaria;

  return *aux;
}

const Complex &Complex::operator+=(const Complex &obj)
{

  this->real += obj.real;
  this->imaginaria += obj.imaginaria;

  return *this;
}

const Complex &Complex::operator-=(const Complex &obj)
{

  this->real -= obj.real;
  this->imaginaria -= obj.imaginaria;

  return *this;
}

Complex &Complex::operator++()
{
  this->real++;

  return *this;
}

Complex Complex::operator++(int)
{
  Complex temp = *this;

  this->real++;

  return temp;
}

Complex &Complex::operator--()
{
  this->real--;

  return *this;
}

Complex Complex::operator--(int)
{
  Complex temp = *this;

  this->real--;

  return temp;
}

ostream &operator<<(ostream &out, const Complex &num)
{
  out << num.real << " " << num.imaginaria;

  return out;
}
