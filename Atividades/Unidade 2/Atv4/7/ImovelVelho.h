#ifndef IMOVELVELHO_H
#define IMOVELVELHO_H

#include "Imovel.h"

#include <string>
using std::string;

class ImovelVelho:public Imovel
{
protected:
  double discount;

public:
  ImovelVelho(string, double);

  void setDiscount(double);

  double getDiscount() const {return this->discount;}

  double getPrice() const {return this->price - getDiscount();}

private:
};

#endif
