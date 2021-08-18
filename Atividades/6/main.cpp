#include <iostream>
using std::cout;
using std::endl;

#include "IntegerSet.h"

int main()
{

	cout << "Criando o primeiro conjunto..." << endl;

	IntegerSet numbers;

	numbers << 2;
	numbers << 4;
	numbers << 7;
	numbers << 5;
	numbers << 2;
	numbers << 1;

	numbers.print();

	cout << "Removendo os elementos 1 e 5 do conjunto" << endl;

	numbers >> 1;
	numbers >> 5;

	numbers.print();

	cout << "Criando o segundo conjunto..." << endl;

	IntegerSet numbers2;

	numbers2 << 7;
	numbers2 << 8;
	numbers2 << 9;
	numbers2 << 4;
	numbers2 << 2;
	numbers2 << 4;

	numbers2.print();

	cout << "Removendo os elementos 2 e 7 do conjunto" << endl;

	numbers2 >> 2;
	numbers2 >> 7;

	numbers2.print();

	IntegerSet objA = numbers | numbers2;

	IntegerSet objB = numbers & numbers2;

	cout << "TESTANDO" << endl;

	objA.print();
	objB.print();


	return 0;
}