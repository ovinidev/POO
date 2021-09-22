#include <iostream>
#include <cstring>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

int main()
{
  char palavra[10];
  cout << "Digite a palavra: ";

  cin.getline(palavra, 10);

  cout << "Palavra digitada: " << palavra << endl;

  cout << "Comprimento da palavra: " << strlen(palavra) << endl;


  return 0;
}