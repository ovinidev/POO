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

  virtual string getCnpj() const { return this->cnpj; }

  virtual void exibirPessoa() const;

protected:
  string cpf;
  string cnpj;
};

#endif
