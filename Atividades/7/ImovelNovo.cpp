#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include "ImovelNovo.h"

ImovelNovo::ImovelNovo(string address, double price) : Imovel(address, price)
{

}

void ImovelNovo::setAdditional(double additional)
{
  this->additional = additional;
}