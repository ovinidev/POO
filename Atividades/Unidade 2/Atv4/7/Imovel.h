#ifndef IMOVEL_H
#define IMOVEL_H

using std::string;

class Imovel
{

protected:
  string address;
  double price;
  
public:

  Imovel(string, double);

  void setAddress(string);

  string getAddress() const {return this->address;}

  void setPrice(double);

  double getPrice() const {return this->price;}


private:

};

#endif
