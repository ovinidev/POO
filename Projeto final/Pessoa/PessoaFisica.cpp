#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include "PessoaFisica.h"
#include "Pessoa.h"

PessoaFisica::PessoaFisica()
{
  this->nome = "";
  this->email = "";
  this->cpfOuCnpj = 0;
}

PessoaFisica::PessoaFisica(string nome, string email, long int cpf) : Pessoa( nome, email){
  this->cpfOuCnpj = cpf;
}

void PessoaFisica::exibirPessoa() const{
  cout << "Nome: " << this->getNome() << endl;
  cout << "Email: " << this->getEmail() << endl;
  cout << "CPF: " << this->getCpfOuCnpj() << endl;
  cout << endl;
}