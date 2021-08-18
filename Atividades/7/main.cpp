#include <iostream>
using std::cout;
using std::endl;

#include "Complex.h"

int main()
{
	Complex n1(5, 7);
	Complex n2(2, 4);
	Complex n6(8, 8);

	n1.print();
	n2.print();

	Complex n3 = n1 + n2;

	n3.print();

	Complex n4 = n1 - n2;

	n4.print();

	n1 += n2;

	n1.print();

	n1 -= n2;

	n1.print();

	n1++;

	n1.print();

	n1--;

	n1.print();

	cout << n6 << endl;

	return 0;
}