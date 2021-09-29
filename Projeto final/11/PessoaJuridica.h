#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H

#include "Pessoa.h"

#include <string>
using std::string;

class PessoaJuridica:public Pessoa
{

public:
  PessoaJuridica(string, string, string, string, int, string);

  virtual string getCpf() const { return this->cpf; }

  virtual string getCnpj() const { return this->cnpj; }

  int getInscricaoEstadual() const { return this->inscricaoEstadual; }
  
  string getRazaoSocial() const { return this->razaoSocial; }

  virtual void exibirPessoa() const;


private:
  string cnpj;
  string cpf;
  int inscricaoEstadual;
  string razaoSocial;
};

#endif