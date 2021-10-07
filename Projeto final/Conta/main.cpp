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

int main()
{
  PessoaFisica p1("Vini", "vini@dataside.com" ,232323);
  PessoaJuridica p2("Joao", "jv@dataside.com" ,315323);
  PessoaJuridica p3("Jorge", "jv@dataside.com" ,315323);
  PessoaJuridica p4("Thales", "jv@dataside.com" ,315323);
  PessoaJuridica p5("Renatha", "jv@dataside.com" ,315323);

  ContaCorrenteComum c1(p1, 123, 20.00);
  ContaCorrenteComLimite c2(p2, 2500, 500.00, 200.00);
  ContaCorrenteComLimite c3(p3, 2000, 500.00, 200.00);
  ContaCorrenteComLimite c4(p4, 2100, 500.00, 200.00);
  ContaCorrenteComLimite c5(p5, 2200, 500.00, 200.00);

  Banco b("Banco", "banco@dataside.com", 5001);

  b.cadastrar(c1);
  b.cadastrar(c2);
  b.cadastrar(c3);
  b.cadastrar(c4);
  b.cadastrar(c5);

  b.exibirContas();

  b.remover(2000);

  cout << "=================" << endl;

  b.exibirContas();


  return 0;
}