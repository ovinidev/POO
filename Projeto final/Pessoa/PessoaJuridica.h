#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H

#include "Pessoa.h"

#include <string>
using std::string;

class PessoaJuridica:public Pessoa
{

public:
  PessoaJuridica(string, string, string);

  virtual string getCnpj() const { return this->cnpj; }

  virtual void exibirPessoa() const;

private:
  string cnpj;
};

#endif