#ifndef CLIENTE_H
#define CLIENTE_H

#include "PessoaFisica.h"

#include <string>
using std::string;

class Cliente: public PessoaFisica
{

  friend ostream &operator<<(ostream &, const Cliente&);
protected:

public:

  Cliente();

  Cliente(int, string);

  void setTelephone(int);

  int getTelephone() const {return this->telephone;}

  void setAddress(string);

  string getAddress() const {return this->address;}


private:
  int telephone;
  string address;
};

#endif
