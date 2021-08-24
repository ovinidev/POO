#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include "Imovel.h"

  Imovel::Imovel(string address, double price) : address(address), price(price){
  }

  void Imovel::setAddress(string address){
    this->address = address;
  }

  void Imovel::setPrice(double price){
    this->price = price;
  }
