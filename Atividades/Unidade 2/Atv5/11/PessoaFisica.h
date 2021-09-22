#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

#include "Pessoa.h"

#include <string>
using std::string;

class PessoaFisica : public Pessoa
{
public:
  
  PessoaFisica(string, string, string, string, string, string);

  virtual string getCpf() const { return this->cpf; }

  virtual string getCnpj() const { return this->cnpj; }

  string getDataDeNascimento() const { return this->dataDeNascimento; }

  string getEstadoCivil() const { return this->estadoCivil; }

  virtual void exibirPessoa() const;


protected:
  string cpf;
  string cnpj;
  string dataDeNascimento;
  string estadoCivil;
};

#endif
