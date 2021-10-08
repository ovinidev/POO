#include <iostream>

#include "Conta.h"
#include "ContaPoupanca.h"
#include "ContaCorrenteComLimite.h"
#include "ContaCorrenteComum.h"
#include "../Pessoa/Pessoa.h"
#include "../Pessoa/PessoaFisica.h"
#include "../Pessoa/PessoaJuridica.h"
#include "../Banco/Banco.h"

#include <list>
using std::list;

using std::cin;
using std::cout;

void visaoDoGerente(Banco &bank)
{
  bool acabou = false;

  while (acabou == false)
  {
    int operacao = 0;

    cout << "Bem vindo a função Gerente!" << endl;
    cout << "Você deseja: " << endl;
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

int main()
{

  PessoaFisica p1("Vini", "vini@dataside.com", 232323);
  ContaCorrenteComum c1(p1, 123, 20.00);

  Banco b("Banco", "banco@dataside.com", 5001);

  visaoDoGerente(b);


  return 0;
}