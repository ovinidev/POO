#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::ostream;

#include "Pessoa.h"

  ostream &operator<<(ostream &out, const Pessoa &p)
  {
    out << "Nome: " << p.getName() << endl;

    return out;
  }

  Pessoa::Pessoa(){
    
  }

  Pessoa::Pessoa(string name) : name(name){
  }

  void Pessoa::setName(string name) {
    this->name = name;
  }