#include <iostream>
using std::cout;
using std::endl;

#include "IntegerSet.h"

int main()
{
	int array[15] = {0, 5, 4, 13, 71, 4, 2 ,6, 4, 1 ,3, 45, 12, 69, 10};

	IntegerSet numbers(array, 15);

	cout << "Criando o primeiro conjunto..." << endl;

	numbers.print();

	cout << "Removendo o elemento 2 do conjunto" << endl;

	numbers.deleteElement(2);

	cout << "Inserindo o elemento 9 no conjunto" << endl;

	numbers.insertElement(9);

	cout << "Conjunto pós mudança:" << endl;

	numbers.print();

	cout << "Criando o segundo conjunto..." << endl;

	IntegerSet numbers2;

	numbers2.insertElement(10);
	numbers2.insertElement(0);
	numbers2.insertElement(12);
	numbers2.insertElement(3);
	numbers2.insertElement(18);
	numbers2.insertElement(48);
	numbers2.insertElement(71);
	numbers2.insertElement(69);
	numbers2.insertElement(66);
	numbers2.insertElement(5);

	numbers2.print();

	cout << "Removendo o elemento 18 do conjunto" << endl;

	numbers2.deleteElement(18);

	cout << "Conjunto pós mudança:" << endl;

	numbers2.print();

	IntegerSet intersections = intersectionOfSets(numbers, numbers2);
	IntegerSet unions = unionOfSets(numbers, numbers2);

	cout << "Exibindo a interceção entre conjunto 1 e 2" << endl;

	intersections.print();

	cout << "Exibindo o conjunto união entre conjunto 1 e 2" << endl;

	unions.print();

	return 0;
}