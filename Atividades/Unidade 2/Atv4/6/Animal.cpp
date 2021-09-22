#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include "Animal.h"

  Animal::Animal(){}

  Animal::Animal(string name) : name(name){
    this->name = name;
  }

  string Animal::walk(){
    return "Caminhando...";
  }
