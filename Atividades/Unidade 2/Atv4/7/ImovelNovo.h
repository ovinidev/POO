#ifndef IMOVELNOVO_H
#define IMOVELNOVO_H

#include "Imovel.h"

#include <string>
using std::string;

class ImovelNovo:public Imovel
{
protected:
  
public:
  ImovelNovo(string, double);

  void setAdditional(double);

  double getAdditional() const {return this->additional;}

  double getPrice() const {return this->price + getAdditional();}

private:
  double additional;
};

#endif
