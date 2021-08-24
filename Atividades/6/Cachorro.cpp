#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include "Cachorro.h"

Cachorro::Cachorro(string name) : Animal(name) {
  this->name = name;
}

string Cachorro::bark()
{
  return "Uau uau";

}
