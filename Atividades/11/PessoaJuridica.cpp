#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include "PessoaJuridica.h"
#include "Pessoa.h"

PessoaJuridica::PessoaJuridica(string nome, string endereco, string email, 
string cnpj, int inscricaoEstadual, string razaoSocial) : Pessoa( nome, endereco, email){
  this->cnpj = cnpj;
  this->inscricaoEstadual = inscricaoEstadual;
  this->razaoSocial = razaoSocial;
}

void PessoaJuridica::exibirPessoa() const{
  cout << this->getNome() << endl;
  cout << this->getEndereco() << endl;
  cout << this->getEmail() << endl;
  cout << this->getCnpj() << endl;
  cout << this->getInscricaoEstadual() << endl;
  cout << this->getRazaoSocial() << endl;
  cout << endl;
}
