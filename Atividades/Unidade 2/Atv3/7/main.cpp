#include <iostream>
using std::cout;
using std::endl;

#include "Complex.h"

int main()
{
	Complex n1(5, 7);
	Complex n2(2, 4);
	Complex n6(8, 8);

	cout << "Elemento n1: " << n1 << endl;
	cout << "Elemento n2: " << n2 << endl;

	Complex n3 = n1 + n2;

	cout << "Elemento n3: " << n3 << endl;

	Complex n4 = n1 - n2;

	cout << "Elemento n4: " << n4 << endl;

	cout << "n1 += n2: " << endl;

	n1 += n2;

	n1.print();

	cout << "n1 -= n2: " << endl;

	n1 -= n2;

	n1.print();

	cout << "n1++ " << endl;

	n1++;

	n1.print();

	cout << "n1-- " << endl;

	n1--;

	n1.print();

	cout << "Elemento n6: " << endl;

	cout << n6 << endl;

	return 0;
}