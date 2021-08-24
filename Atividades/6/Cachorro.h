#ifndef CACHORRO_H
#define CACHORRO_H

#include "Animal.h"

#include <string>
using std::string;

class Cachorro : public Animal
{
protected:
public:
  Cachorro(string);

  string bark();

private:
};

#endif
