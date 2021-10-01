#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include "PessoaJuridica.h"
#include "Pessoa.h"

PessoaJuridica::PessoaJuridica(string nome, string email, 
string cnpj) : Pessoa( nome, email){
  this->cnpj = cnpj;
}

void PessoaJuridica::exibirPessoa() const{
  cout << "Nome: " << this->getNome() << endl;
  cout << "Email: " << this->getEmail() << endl;
  cout << "CNPJ: " << this->getCnpj() << endl;
  cout << endl;
}
