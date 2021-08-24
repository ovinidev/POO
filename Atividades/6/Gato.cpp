#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include "Gato.h"

Gato::Gato(string name) : Animal(name) {
  this->name = name;
}

string Gato::meow()
{
  return "meow";
  
}
