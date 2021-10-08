#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include "PessoaJuridica.h"
#include "Pessoa.h"

PessoaJuridica::PessoaJuridica(string nome, string email, long int cnpj) : Pessoa( nome, email){
  this->cpfOuCnpj = cnpj;
}


void PessoaJuridica::exibirPessoa() const{
  cout << "Nome: " << this->getNome() << endl;
  cout << "Email: " << this->getEmail() << endl;
  cout << "CNPJ: " << this->getCpfOuCnpj() << endl;
  cout << endl;
}
