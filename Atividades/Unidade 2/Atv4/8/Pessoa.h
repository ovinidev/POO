#ifndef PESSOA_H
#define PESSOA_H

using std::string;
#include <iostream>
using std::ostream;

class Pessoa
{
  friend ostream &operator<<(ostream &, const Pessoa&);

protected:
  string name;
  
public:
  Pessoa();
  
  Pessoa(string);

  void setName(string);

  string getName() const { return name; };


private:

};

#endif
