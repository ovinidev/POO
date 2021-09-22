#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include "PessoaJuridica.h"

PessoaJuridica::PessoaJuridica(){

}


PessoaJuridica::PessoaJuridica(int cnpj, string corporateName) : 
cnpj(cnpj), corporateName(corporateName)
{

}

void PessoaJuridica::setCnpj(int cnpj) {
  this->cnpj = cnpj; 
}

void PessoaJuridica::setCorporateName(string corporateName) {
  this->corporateName = corporateName;
}