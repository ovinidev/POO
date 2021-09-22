#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "Pilha.h"

int main()
{
  //Pilha de inteiros
  Pilha<int> pi;
  int x = 1;

  cout << "Inserindo elementos..." << endl;

  pi.push(x);
  pi.push(x);
  pi.push(x);
  pi.push(x);
  pi.push(x);
  pi.push(x);
  pi.push(x);
  pi.push(x);
  pi.push(x);
  pi.push(x);

  cout << "Exibindo elementos: " << endl;
  pi.print();

  cout << "Removendo elementos..." << endl;

  pi.pop(x);
  pi.pop(x);
  pi.pop(x);
  pi.pop(x);
  pi.pop(x);
  pi.pop(x);
  pi.pop(x);
  pi.pop(x);
  pi.pop(x);
  pi.pop(x);

  cout << "Tentando remover elementos com a pilha vazia: " << endl;
  
  pi.pop(x);
  pi.pop(x);
  pi.pop(x);


  return 0;
}