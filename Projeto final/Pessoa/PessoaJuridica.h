#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H

#include "Pessoa.h"

#include <string>
using std::string;

class PessoaJuridica:public Pessoa
{

public:
  PessoaJuridica();
  PessoaJuridica(string, string, long int);

  virtual void exibirPessoa() const;

private:
};

#endif