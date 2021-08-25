#include <iostream>
using std::cout;
using std::endl;

#include "Cliente.h"
#include "Empresa.h"
#include "Funcionario.h"
#include "PessoaJuridica.h"


int main()
{
	Empresa danone;

	danone.addFuncionario(Funcionario ("Peter Park", 215040, 1200.00, 100, 70));
	danone.addFuncionario(Funcionario ("Vini Park", 215040, 1200.00, 100, 70));
	danone.addFuncionario(Funcionario ("Eve Park", 215040, 1200.00, 100, 70));
	danone.addFuncionario(Funcionario ("Bivar Park", 215040, 1200.00, 100, 70));
	danone.addFuncionario(Funcionario ("Juca Park", 215040, 1200.00, 100, 70));

	danone.printFuncionarios();

	danone.addCliente(Cliente (98641615, "New York"));
	danone.addCliente(Cliente (98954150, "João Pessoa"));
	danone.addCliente(Cliente (15456415, "Campina Grande"));
	danone.addCliente(Cliente (74874415, "Rio de Janeiro"));
	danone.addCliente(Cliente (21849849, "Fortaleza"));

	danone.printClientes();

	return 0;
}