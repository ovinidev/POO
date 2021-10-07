#include "../Pessoa/PessoaFisica.h"
#include "../Pessoa/PessoaJuridica.h"
#include "Banco.h"
#include "../Conta/Conta.h"
#include "../Conta/ContaPoupanca.h"
#include "../Conta/ContaCorrenteComLimite.h"
#include "../Conta/ContaCorrenteComum.h"

#include <iostream>
using std::cout;
using std::endl;

#include <fstream>
using std::ifstream;
using std::ios;
using std::ofstream;

Banco::Banco(string nome, string email, long int cnpj) : PessoaJuridica(nome, email, cnpj)
{
  this->nome = nome;
  this->email = email;
  this->cnpj = cnpj;
};

void Banco::cadastrar(Conta &conta)
{
  this->listaContas.push_back(conta);
  this->quantidadeContas++;
};

void Banco::remover(int numero)
{
  for (int i = 0; i < this->quantidadeContas; i++)
  {
    if (numero == this->listaContas[i].getNumeroDaConta()){
      this->listaContas.erase(listaContas.begin() + i);
      this->quantidadeContas--;
    }
  }
}

void Banco::exibirContas()
{
  for (int i = 0; i < this->quantidadeContas; i++)
  {
    cout << "Bem vindo a sua conta!" << endl;
    cout << "Nome: " << this->listaContas[i].getNomeCorrentista().getNome() << endl;
    cout << "Saldo: R$" << this->listaContas[i].getSaldo() << endl;
    cout << "Numbero da Conta: " << this->listaContas[i].getNumeroDaConta() << endl;
    cout << endl;
  }
}

Banco::~Banco()
{
}