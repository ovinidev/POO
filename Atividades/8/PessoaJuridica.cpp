#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include "PessoaJuridica.h"

PessoaJuridica::PessoaJuridica(string name, int cnpj, string corporateName) : 
Pessoa(name), cnpj(cnpj), corporateName(corporateName)
{

}

void PessoaJuridica::setCnpj(int cnpj) {
  this->cnpj = cnpj; 
}

void PessoaJuridica::setCorporateName(string corporateName) {
  this->corporateName = corporateName;
}