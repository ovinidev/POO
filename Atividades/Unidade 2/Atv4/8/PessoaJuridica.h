#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H

#include "Pessoa.h"

#include <string>
using std::string;

class PessoaJuridica:public Pessoa
{
protected:

public:
  PessoaJuridica();

  PessoaJuridica(string, int, string);

  void setCnpj(int);

  int getCnpj() const { return cnpj; }

  void setCorporateName(string);

  string getCorporateName() const { return corporateName; }

private:
  int cnpj;
  string corporateName;
};

#endif
