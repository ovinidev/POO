#include <iostream>
using std::cout;
using std::endl;

#include "Cliente.h"
#include "Empresa.h"
#include "Funcionario.h"
#include "PessoaJuridica.h"
#include "PessoaFisica.h"


int main()
{
	Empresa danone;

	danone.addFuncionario(Funcionario ("Peter Park", 215040, 1500.00, 100, 70));
	danone.addFuncionario(Funcionario ("Vini Medeiros", 215040, 2500.00, 200, 100));
	danone.addFuncionario(Funcionario ("Thales Harper", 215040, 2000.00, 150, 85));
	danone.addFuncionario(Funcionario ("Bivar Silva", 215040, 4800.00, 75, 30));
	danone.addFuncionario(Funcionario ("João Gomes", 215040, 3500.00, 90, 45));

	danone.printFuncionarios();

	danone.addCliente(Cliente (98641615, "New York"));
	danone.addCliente(Cliente (48954150, "João Pessoa"));
	danone.addCliente(Cliente (15456415, "Campina Grande"));
	danone.addCliente(Cliente (74874415, "Rio de Janeiro"));
	danone.addCliente(Cliente (21849849, "Fortaleza"));

	danone.printClientes();

	cout << "Salário bruto total dos funcionários: R$ " << danone.calcularFolhaDePagamento() << endl;

	return 0;
}