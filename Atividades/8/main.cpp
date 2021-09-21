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

  pi.print();

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
  
  pi.pop(x);
  pi.pop(x);
  pi.pop(x);


  return 0;
}