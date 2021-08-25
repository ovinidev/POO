#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H


#include <string>
using std::string;

class PessoaJuridica
{
protected:

public:
  PessoaJuridica();

  PessoaJuridica(int, string);

  void setCnpj(int);

  int getCnpj() const { return cnpj; }

  void setCorporateName(string);

  string getCorporateName() const { return corporateName; }

private:
  int cnpj;
  string corporateName;

};

#endif
