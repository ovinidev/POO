#include <iostream>
using std::cout;
using std::endl;

#include "Imovel.h"
#include "ImovelVelho.h"
#include "ImovelNovo.h"


int main()
{
	ImovelNovo Apartamento("Campina Grande", 75000.70);

	cout << "Apartamento localizado em: " << Apartamento.getAddress() << endl;

	cout << "Preço original do novo apartamento: R$ " << Apartamento.getPrice() << endl;

	Apartamento.setAdditional(5000.50);

	cout << "Aplicando o adicional de R$: " << Apartamento.getAdditional() << endl;

	cout << "Preço do apartamento com valor adicional: R$ " << Apartamento.getPrice() << endl;

	cout << endl;

	ImovelVelho Quitinete("Ipanema", 20000.00);

		cout << "Quitinete localizado em: " << Quitinete.getAddress() << endl;

	cout << "Preço original da velha quitinete: R$ " << Quitinete.getPrice() << endl;

	Quitinete.setDiscount(3000.50);

	cout << "Aplicando o desconto de: R$ " << Quitinete.getDiscount() << endl;

	cout << "Preço da quitinete com o desconto: R$ " << Quitinete.getPrice() << endl;

	cout << endl;


	return 0;
}