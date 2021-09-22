#ifndef INTEGERSET_H
#define INTEGERSET_H

using std::string;

#include <vector>

class IntegerSet
{
  friend IntegerSet unionOfSets(IntegerSet, IntegerSet);

  friend IntegerSet intersectionOfSets(IntegerSet, IntegerSet);

public:
  IntegerSet();

  IntegerSet(int[], int);

  void insertElement(int);

  void deleteElement(int);

  void print() const;

private:
  bool array[100];
};

#endif
