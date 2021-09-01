#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include "PessoaFisica.h"
#include "Pessoa.h"

PessoaFisica::PessoaFisica(string nome, string endereco, string email, 
string cpf, string dataDeNascimento, string estadoCivil) : Pessoa( nome, endereco, email){
  this->cpf = cpf;
  this->dataDeNascimento = dataDeNascimento;
  this->estadoCivil = estadoCivil;
}

void PessoaFisica::exibirPessoa() const{
  cout << this->getNome() << endl;
  cout << this->getEndereco() << endl;
  cout << this->getEmail() << endl;
  cout << this->getCpf() << endl;
  cout << this->getDataDeNascimento() << endl;
  cout << this->getEstadoCivil() << endl;
  cout << endl;
}