#include <iostream>

#include "./Banco/Banco.h"
#include "./Conta/ContaPoupanca.h"
#include "./Conta/ContaCorrenteComLimite.h"
#include "./Conta/ContaCorrenteComum.h"
#include "./Pessoa/Pessoa.h"
#include "./Pessoa/PessoaFisica.h"
#include "./Pessoa/PessoaJuridica.h"
#include "./Banco/Banco.h"

#include <list>
using std::list;

using std::cin;
using std::cout;


int main()
{
  int option = 0;

  Banco bank("Banco", "banco@dataside.com", 5001);

  cout << "Bem vindo ao Banco viniBank!" << endl;
  cout << "Você deseja entrar como gerente ou correntista?" << endl;
  cout << "1 - Gerente" << endl;
  cout << "2 - Correntista" << endl;

  cin >> option;

  if (option == 1)
  {
    bank.visaoDoGerente(bank);
  }
  else if (option == 2)
  {
    int numero;
    cout << "Por favor, digite o numero da conta: " << endl;
    cin >> numero;

    bank.visaoDoCorrentista(bank, bank.getConta(numero));
  }
  else
  {
    cout << "Digite uma opção válida!" << endl;
    cin >> option;
  }

  return 0;
}