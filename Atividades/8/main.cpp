#include <iostream>
using std::cout;
using std::endl;

#include "Pessoa.h"
#include "PessoaFisica.h"
#include "PessoaJuridica.h"


int main()
{
	cout << "Criando pessoa física..." << endl;

	PessoaFisica p1("Thales Luis", 10040917499);

	cout << p1;
	cout << "CPF: " << p1.getCpf() << endl;

	cout << endl;

	cout << "Criando pessoa jurídica..." << endl;

	PessoaJuridica p2("Cristiano Ronaldo", 51652, "Jogador");

	cout << "Nome: " << p2.getName() << endl;
	cout << "CNPJ: " << p2.getCnpj() << endl;
	cout << "Razão social: " << p2.getCorporateName() << endl;

	cout << endl;

	cout << "Criando mais uma pessoa física..." << endl;

	PessoaFisica p3;

	p3.setName("Lionel Messi");
	p3.setCpf(1811559537);

	cout << p3;
	cout << "CPF: " << p3.getCpf() << endl;

	return 0;
}