#include <iostream>

#include "Conta.h"
#include "ContaPoupanca.h"
#include "ContaCorrenteComLimite.h"
#include "ContaCorrenteComum.h"
#include "../Pessoa/Pessoa.h"
#include "../Pessoa/PessoaFisica.h"
#include "../Pessoa/PessoaJuridica.h"

#include <list>
using std::list;

int main()
{
  PessoaFisica p1("Vini", "vini@dataside.com" ,"232323");
  PessoaJuridica p2("Joao", "jv@dataside.com" ,"315323");

  ContaCorrenteComum c1(123, p1, 20.00);
  ContaCorrenteComLimite c2(250.00, 2500, p2, 200.00);

  c1 >> 500;
  c2 >> 500;

  c2.print();


  return 0;
}