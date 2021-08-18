#ifndef INTEGERSET_H
#define INTEGERSET_H

using std::string;

#include <vector>

class IntegerSet
{


public:

  const IntegerSet operator<<(int k);

  const IntegerSet operator>>(int k);

  const IntegerSet &operator|(const IntegerSet &);

  const IntegerSet &operator&(const IntegerSet &);

  IntegerSet();

  IntegerSet(int[], int);

  void insertElement(int);

  void deleteElement(int);

  void print() const;

private:
  bool array[100];
};

#endif
