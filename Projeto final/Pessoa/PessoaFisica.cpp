#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include "PessoaFisica.h"
#include "Pessoa.h"

PessoaFisica::PessoaFisica(string nome, string email, string cpf) : Pessoa( nome, email){
  this->cpf = cpf;
}

void PessoaFisica::exibirPessoa() const{
  cout << "Nome: " << this->getNome() << endl;
  cout << "Email: " << this->getEmail() << endl;
  cout << "CPF: " << this->getCpf() << endl;
  cout << endl;
}