#include <iostream>
using std::cout;
using std::endl;

#include "Pessoa.h"

Pessoa::Pessoa(string name, int age, double height)
{
  setName(name);
  setAge(age);
  setHeight(height);
}

void Pessoa::setName(string name)
{
  this -> name = name;
}

void Pessoa::setAge(int age)
{
  this -> age = age;
}

void Pessoa::setHeight(double height)
{
  this -> height = height;
}

void Pessoa::print() const
{
  cout << "Nome: " << getName() << endl;
  cout << "Idade: " << getAge() << endl;
  cout << "Altura: " << getHeight() << endl; 
  cout << endl;
}