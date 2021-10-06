#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

#include "Pessoa.h"

#include <string>
using std::string;

class PessoaFisica : public Pessoa
{
public:
  
  PessoaFisica(string, string, string);

  virtual string getCpf() const { return this->cpf; }

  virtual void exibirPessoa() const;

protected:
  string cpf;
};

#endif
