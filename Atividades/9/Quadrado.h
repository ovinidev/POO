#ifndef QUADRADO_H
#define QUADRADO_H

#include "FormaBidimensional.h"

#include <iostream>
using std::cout;
using std::endl;

class Quadrado : public FormaBidimensional
{
public:
  Quadrado(double lado) : FormaBidimensional(4), lado(lado) {}

  virtual void desenhar()
  {
    cout << "-----" << endl;
    cout << "|   |" << endl;
    cout << "-----" << endl;
  }

  virtual double calcularArea()
  {
    return this->lado * this->lado;
  }

  virtual double calcularPerimetro()
  {
    return this->lado * 4;
  }

private:
  double lado;
};

#endif