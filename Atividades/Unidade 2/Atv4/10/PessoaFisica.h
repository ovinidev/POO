#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

#include "Pessoa.h"

#include <string>
using std::string;

class PessoaFisica : public Pessoa
{
protected:

public:

  PessoaFisica();
  
  PessoaFisica(string, long int);

  void setCpf(int);

  int getCpf() const { return cpf; }

private:
  long int cpf;
};

#endif
