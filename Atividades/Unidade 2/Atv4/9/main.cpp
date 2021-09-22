#include <iostream>
using std::cout;
using std::endl;

#include "Funcionario.h"
#include "PessoaFisica.h"
#include "Pessoa.h"


int main()
{
	cout << "Criando funcionário..." << endl;

	Funcionario p1("Peter Park", 215040, 6000.00, 100, 70);

	cout << p1;

	cout << endl;

	cout << "Criando outro funcionário..." << endl;

	Funcionario p2;

	p2.setName("Arlindo");
	
	p2.setSalary(2500.00);

	p2.setMatriculation(1212440);

	p2.setMonthlyWorkload(200);

	p2.setHoursWorkedInMonth(100);

	cout << p2;

	cout << p2.calculaSalarioBruto() << endl;

	cout << endl;

	cout << "Criando outro funcionário..." << endl;

	Funcionario p3("Ragnar Lothbrook", 145412, 2400.00, 200, 300);

	cout << p3;

	cout << endl;


	return 0;
}