#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include "PessoaFisica.h"

PessoaFisica::PessoaFisica(){
}

PessoaFisica::PessoaFisica(string name, long int cpf) : Pessoa(name), cpf(cpf){
}

void PessoaFisica::setCpf(int cpf) {
  this->cpf = cpf; 
}