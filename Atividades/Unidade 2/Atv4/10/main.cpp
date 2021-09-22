#include <iostream>
using std::cout;
using std::endl;

#include "Cliente.h"
#include "PessoaFisica.h"
#include "Pessoa.h"


int main()
{
	cout << "Criando Cliente..." << endl;

	Cliente p1(993925589, "New Jersey");

	cout << p1;

	cout << endl;

	cout << "Criando outro Cliente..." << endl;

	Cliente p2;

	p2.setTelephone(996425589);
	
	p2.setAddress("New York");


	cout << p2;

	return 0;
}