#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include <vector>

#include "IntegerSet.h"

IntegerSet unionOfSets(IntegerSet object1, IntegerSet object2)
{
  IntegerSet object3;
  
  for (int i = 0; i < 100; i++)
  {
    if (object1.array[i] == true || object2.array[i] == true)
    {
      object3.insertElement(i);
    }
  }

  return object3;
}

IntegerSet intersectionOfSets(IntegerSet object1, IntegerSet object2)
{
  IntegerSet object3;

  for (int i = 0; i < 100; i++)
  {
    if (object1.array[i] == true && object2.array[i] == true)
    {
      object3.insertElement(i);
    }
  }

  return object3;
}

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
    if (array[i] == true)
    {
      cout << i << " ";
    }
  }
  cout << endl;
}