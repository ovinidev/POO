#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include <vector>

#include "IntegerSet.h"

IntegerSet::IntegerSet()
{
  for (int i = 0; i < 100; i++)
  {
    array[i] = 0;
  }
}

IntegerSet::IntegerSet(int array[], int tamanho)
{
  for (int i = 0; i < 100; i++)
  {
    this->array[i] = 0;
  }

  for (int j = 0; j < tamanho; j++)
  {
    if (array[j] >= 0 && array[j] < 100)
    {
      insertElement(array[j]);
    }
  }
}

const IntegerSet IntegerSet::operator<<(int k)
{
  if (k >= 0 && k < 100)
  {
    array[k] = true;
  }

  return *this;
}

const IntegerSet IntegerSet::operator>>(int k)
{
  if (k >= 0 && k < 100)
  {
    array[k] = false;
  }

  return *this;
}

const IntegerSet &IntegerSet::operator|(const IntegerSet &conj)
{

  IntegerSet *aux = new IntegerSet;

  for (int i = 0; i < 100; i++)
  {
    if (this->array[i] == true || conj.array[i] == true)
    {
      aux->insertElement(i);
    }
  }

  return *aux;
}

const IntegerSet &IntegerSet::operator&(const IntegerSet &conj)
{

  IntegerSet *aux = new IntegerSet;

  for (int i = 0; i < 100; i++)
  {
    if (this->array[i] == true && conj.array[i] == true)
    {
      aux->insertElement(i);
    }
  }

  return *aux;
}

void IntegerSet::insertElement(int k)
{
  if (k >= 0 && k < 100)
  {
    array[k] = true;
  }
}

void IntegerSet::deleteElement(int k)
{
  if (k >= 0 && k < 100)
  {
    array[k] = false;
  }
}

void IntegerSet::print() const
{
  for (int i = 0; i < 100; i++)
  {
    if (array[i])
    {
      cout << i << " ";
    }
  }
  cout << endl;
}