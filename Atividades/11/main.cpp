#include <iostream>
using std::cout;
using std::endl;

#include "IntegerSet.h"

int main()
{
	int array[5] = {0, 1, 2, 3, 4};

	IntegerSet numbers(array, 5);

	numbers.print();

	numbers.deleteElement(2);

	numbers.print();

	IntegerSet numbers2;

	numbers2.insertElement(10);
	numbers2.insertElement(0);
	numbers2.insertElement(12);
	numbers2.insertElement(3);
	numbers2.insertElement(18);
	numbers2.insertElement(48);
	numbers2.deleteElement(18);

	numbers2.print();

	IntegerSet intersections = intersectionOfSets(numbers, numbers2);
	IntegerSet unions = unionOfSets(numbers, numbers2);

	intersections.print();
	unions.print();

	return 0;
}