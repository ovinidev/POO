#ifndef GATO_H
#define GATO_H

#include "Animal.h"

#include <string>
using std::string;

class Gato:public Animal
{
protected:

public:
  Gato(string);

  string meow();
private:
};

#endif
