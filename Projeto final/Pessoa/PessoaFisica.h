#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

#include "Pessoa.h"

#include <string>
using std::string;

class PessoaFisica : public Pessoa
{
public:

  PessoaFisica();
  
  PessoaFisica(string, string, long int);

  virtual void exibirPessoa() const;

protected:
};

#endif
