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
  this->cpfOuCnpj = cnpj;
};

void Banco::cadastrar(Conta &conta)
{
  this->listaContas.push_back(conta);
  this->quantidadeContas++;
};

void Banco::cadastrarCorrentista(Pessoa &pessoa)
{
  this->listaCorrentistas.push_back(pessoa);
  this->quantidadeCorrentistas++;
};

Pessoa &Banco::getCorrentista(string nome)
{
  for (int i = 0; i < this->quantidadeCorrentistas; i++)
  {
    if (nome == listaCorrentistas[i].getNome())
    {
      return listaCorrentistas[i];
    }
  }
  return this->listaCorrentistas[0];
}

void Banco::remover(int numero)
{
  for (int i = 0; i < this->quantidadeContas; i++)
  {
    if (numero == this->listaContas[i].getNumeroDaConta())
    {
      this->listaContas.erase(listaContas.begin() + i);
      this->quantidadeContas--;
    }
  }
}

void Banco::consultar(int numero)
{
  for (int i = 0; i < this->quantidadeContas; i++)
  {

    if (this->listaContas[i].getNumeroDaConta() == numero)
    {
      cout << "Olá " << this->listaContas[i].getNomeCorrentista().getNome() << ", aqui estão os dados da sua conta: " << endl;
      cout << "Nome: " << this->listaContas[i].getNomeCorrentista().getNome() << endl;
      cout << "Numero: " << this->listaContas[i].getNumeroDaConta() << endl;
      cout << "Email: " << this->listaContas[i].getNomeCorrentista().getEmail() << endl;
      cout << endl;
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
    cout << "Numero da Conta: " << this->listaContas[i].getNumeroDaConta() << endl;
    cout << endl;
  }
}

void Banco::exibirCorrentista(string nome)
{
  for (int i = 0; i < this->quantidadeCorrentistas; i++)
  {
    if (nome == listaContas[i].getNomeCorrentista().getNome())
    {
      cout << "Correntistas do Banco: " << endl;
      cout << "Nome: " << this->listaCorrentistas[i].getNome() << endl;
      cout << "Email: " << this->listaCorrentistas[i].getEmail() << endl;
      cout << endl;
      break;
    }
  }
}

Banco::~Banco()
{
}
