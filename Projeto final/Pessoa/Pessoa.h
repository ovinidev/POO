#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using std::string;


class Pessoa
{

protected:
  string nome;
  string email;
  long int cpfOuCnpj;

public:
  Pessoa(string, string);

  virtual string getNome() const { return nome; };

  virtual string getEmail() const { return email; };

  virtual long int getCpfOuCnpj() const { return cpfOuCnpj; };


};

#endif
