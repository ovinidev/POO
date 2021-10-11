#include "../Pessoa/PessoaFisica.h"
#include "../Pessoa/PessoaJuridica.h"
#include "Banco.h"
#include "../Conta/Conta.h"
#include "../Conta/ContaPoupanca.h"
#include "../Conta/ContaCorrenteComLimite.h"
#include "../Conta/ContaCorrenteComum.h"

#include <iostream>
using std::cout;
using std::cin;
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

  this->lerDados();
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
      cout << "Conta removida com sucesso!" << endl;
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
      cout << "Saldo: $" << this->listaContas[i].getSaldo() << endl;
    }
    else if (this->listaContas[i].getNumeroDaConta() != numero)
    {
      cout << "Conta não encontrada!" << endl;
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

Conta& Banco::getConta(int numero)
{
  for (int i = 0; i < this->quantidadeContas; i++)
  {
    if (listaContas[i].getNumeroDaConta() == numero)
    {
      return listaContas[i];
    }
  }
  return this->listaContas[0];
}

Banco::~Banco()
{
  this->salvaDados();
}

struct Conta_entrada
{
  string nome;
  int num;
  int niver;
  double saldo;
  double limite;
};

struct correntistas_entrada
{
  string nome;
  long int cpfOrCNPJ;
  string email;
};

bool Banco::salvaDados()
{
  ofstream fout("contas.dat", std::ios::out);

  if (!fout)
    return false;

  for (int i = 0; i < this->quantidadeContas; i++)
  {
    fout << listaContas[i].getNomeCorrentista().getNome() << ' ' << listaContas[i].getNumeroDaConta() << ' ' << listaContas[i].getSaldo() << " " << listaContas[i].getLimite() << " " << listaContas[i].getAniversario() << ' ' << endl;
  }

  fout.close();

  salvaPessoas();

  return true;
}

bool Banco::salvaPessoas()
{
  ofstream fout("correntistas.dat", std::ios::out);

  if (!fout)
    return false;

  for (int i = 0; i < quantidadeCorrentistas; i++)
  {
    fout << listaCorrentistas[i].getNome() << ' ' << listaCorrentistas[i].getEmail() << ' ' << listaCorrentistas[i].getCpfOuCnpj() << ' ' << endl;
  }

  fout.close();

  return true;
}

bool Banco::lerDados()
{
  ifstream fin("correntistas.dat", std::ios::in);

  if (!fin)
    return false;

  correntistas_entrada c;

  while (fin >> c.nome >> c.email >> c.cpfOrCNPJ)
  {
    if (c.email != "x")
    {
      PessoaJuridica novaPessoa(c.nome, c.email, c.cpfOrCNPJ);
      this->listaCorrentistas.push_back(novaPessoa);
      this->quantidadeCorrentistas++;
    }
    else
    {
      PessoaFisica novaPessoa(c.nome, c.email, c.cpfOrCNPJ);
      this->listaCorrentistas.push_back(novaPessoa);
      this->quantidadeCorrentistas++;
    }
  }

  this->lerContas();

  fin.close();

  return true;
}

bool Banco::lerContas()
{
  ifstream fin("contas.dat", std::ios::in);

  if (!fin)
  {
    return false;
  }
  Conta_entrada c;

  while (fin >> c.nome >> c.num >> c.saldo >> c.niver >> c.limite)
  {

    if (c.niver != 0)
    {
      ContaPoupanca novaConta(this->getCorrentista(c.nome), c.num, c.saldo, c.niver);
      this->cadastrar(novaConta);
    }
    else if (c.limite != 0)
    {
      ContaCorrenteComLimite novaConta(this->getCorrentista(c.nome), c.num, c.saldo, c.limite);
      this->cadastrar(novaConta);
    }
    else
    {
      ContaCorrenteComum novaConta(this->getCorrentista(c.nome), c.num, c.saldo);
      this->cadastrar(novaConta);
    }
  }
  fin.close();
  return true;
}

void Banco::visaoDoGerente(Banco &bank)
{
  bool acabou = false;
  int operacao = 0;

  while (acabou == false)
  {

    cout << endl;
    cout << "Olá, bem vindo a função Gerente!" << endl;
    cout << endl;
    cout << "Aqui você pode: " << endl;
    cout << "1 - Abrir uma conta nova" << endl;
    cout << "2 - Consultar uma conta já existente" << endl;
    cout << "3 - Fechar conta" << endl;
    cout << "-1 - encerrar operação" << endl;

    cin >> operacao;
    cout << endl;

    if (operacao == 1)
    {
      long int numeroDaConta;
      double saldo;
      long int cpfOuCnpj;
      string email;
      int aniversario;
      string nome;
      double limite;

      int option = 0;
      int tipoPessoa = 0;

      cout << "Você é: " << endl;
      cout << "1 - Pessoa Física" << endl;
      cout << "2 - Pessoa Jurídica" << endl;
      cin >> tipoPessoa;
      cout << endl;

      if (tipoPessoa == 1)
      {
        cout << "Digite seu nome: " << endl;
        cin >> nome;
        cout << "Digite seu email: " << endl;
        cin >> email;
        cout << "Digite seu CPF: " << endl;
        cin >> cpfOuCnpj;

        PessoaFisica novaConta(nome, email, cpfOuCnpj);
        bank.cadastrarCorrentista(novaConta);
      }
      else if (tipoPessoa == 2)
      {
        cout << "Digite seu nome: " << endl;
        cin >> nome;
        cout << "Digite seu email: " << endl;
        cin >> email;
        cout << "Digite seu CNPJ: " << endl;
        cin >> cpfOuCnpj;
        PessoaJuridica novaConta(nome, email, cpfOuCnpj);
        bank.cadastrarCorrentista(novaConta);
      }

      cout << endl;
      cout << "Por favor selecione o tipo de conta que você deseja: " << endl;
      cout << "1 - CONTA POUPANÇA" << endl;
      cout << "2 - CONTA CORRENTE COMUM" << endl;
      cout << "3 - CONTA CORRENTE COM LIMITE" << endl;

      cin >> option;
      cout << endl;

      if (option == 1)
      {
        cout << "Digite o número para a conta: " << endl;
        cin >> numeroDaConta;
        cout << "Digite o aniversário da conta: " << endl;
        cin >> aniversario;
        cout << "Digite o saldo inical para a conta: " << endl;
        cin >> saldo;
        ContaPoupanca c1(bank.getCorrentista(bank.getNome()), numeroDaConta, saldo, aniversario);
        bank.cadastrar(c1);
      }
      else if (option == 2)
      {
        cout << "Digite o número para a conta: " << endl;
        cin >> numeroDaConta;
        cout << "Digite o saldo inical para a conta: " << endl;
        cin >> saldo;
        ContaCorrenteComum c1(bank.getCorrentista(bank.getNome()), numeroDaConta, saldo);
        bank.cadastrar(c1);
      }
      else if (option == 3)
      {
        cout << "Digite o número para a conta: " << endl;
        cin >> numeroDaConta;
        cout << "Digite o saldo inical para a conta: " << endl;
        cin >> saldo;
        cout << "Digite o saldo limite: " << endl;
        cin >> limite;
        ContaCorrenteComLimite c1(bank.getCorrentista(bank.getNome()), numeroDaConta, saldo, limite);
        bank.cadastrar(c1);
      }
    }
    else if (operacao == 2)
    {
      int numero;
      cout << "Digite o numero da conta para busca-la: " << endl;
      cin >> numero;
      cout << endl;

      bank.consultar(numero);
    }
    else if (operacao == 3)
    {
      int numero;
      cout << "Digite o numero da conta para busca-la: " << endl;
      cin >> numero;
      cout << endl;

      bank.remover(numero);
    }
    else if (operacao == -1)
    {
      acabou = true;
    }
  }
}

void Banco::visaoDoCorrentista(Banco &bank, Conta &conta)
{
  bool acabou = false;
  int operacao = 0;

  while (acabou == false)
  {
    cout << endl;
    cout << "Olá, bem vindo a função Correntista!" << endl;
    cout << endl;
    cout << "Aqui você pode: " << endl;
    cout << "1 - Fazer um depósito" << endl;
    cout << "2 - Fazer um extrato" << endl;
    cout << "3 - Consultar seu saldo" << endl;
    cout << "4 - Consultar seu extrato" << endl;
    cout << "-1 - encerrar operação" << endl;

    cin >> operacao;

    if (operacao == 1)
    {
      double valor;
      cout << "Digite o valor:" << endl;
      cin >> valor;

      conta << valor;
      conta.print();

    }
    else if (operacao == 2)
    {
      double valor;
      cout << "Digite o valor:" << endl;
      cin >> valor;

      conta >> valor;
      conta.print();
    }
    else if (operacao == 3)
    {
      cout << "Seu saldo é de: $" << conta.getSaldo() << endl;
    }
    else if (operacao == 4)
    {
      cout << "Consultando extratos: " << endl;
      conta.print();
    }
    else if (operacao == -1)
    {
      acabou = true;
    }
  }
}