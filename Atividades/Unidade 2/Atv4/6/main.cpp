#include <iostream>
using std::cout;
using std::endl;

#include "Animal.h"
#include "Cachorro.h"
#include "Gato.h"

int main()
{
	Cachorro dog1("Betoven");
	Gato cat1("Mario");

	
	cout << dog1.bark() << endl;
	cout << dog1.walk() << endl;

	cout << cat1.meow() << endl;


	return 0;
}