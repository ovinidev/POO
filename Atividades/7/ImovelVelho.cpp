#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include "ImovelVelho.h"

ImovelVelho::ImovelVelho(string address, double price) : Imovel(address, price)
{

}

void ImovelVelho::setDiscount(double discount)
{
  this->discount = discount;
};
