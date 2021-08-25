#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include "Cliente.h"

ostream &operator<<(ostream &out, const Cliente &p)
{
  out << "Telephone: " << p.getTelephone() << endl;
  out << "Address: " << p.getAddress() << endl;

  return out;
}

Cliente::Cliente(){
}

Cliente::Cliente(int telephone, string address) : 
telephone(telephone), address(address)
{
  setTelephone(telephone);
  setAddress(address);
}

void Cliente::setTelephone(int thelphone){
  this->telephone = thelphone;
}

void Cliente::setAddress(string address){
  this->address = address;
}

