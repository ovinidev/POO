#include <iostream>
using std::cout;
using std::endl;

#include "Retangulo.h"

Retangulo::Retangulo(double Largura, double Altura)
{
  setLargura(Largura);
  setAltura(Altura);
}

void Retangulo::setLargura(double Largura)
{
  largura = (Largura > 0 && Largura < 24) ? Largura : 1;
}

void Retangulo::setAltura(double Altura)
{
  altura = (Altura > 0 && Altura < 24) ? Altura : 1;
}

double Retangulo::getLargura() {
  return largura;
}

double Retangulo::getAltura() {
  return altura;
}

double Retangulo::calculaPerimetro()
{
  perimetro = getLargura() + getLargura() + getAltura() + getAltura();

  cout << "Perímetro: " << perimetro << endl;

  return perimetro;
}

double Retangulo::calculaArea()
{
  area = getLargura() * getAltura();

  cout << "Area: " << area << endl;

  return area;
}