#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo
{
public:
  Retangulo(double, double);

  void setLargura(double);

  void setAltura(double);

  double getLargura();

  double getAltura();

  double calculaPerimetro();

  double calculaArea();

private:
  double largura;
  double altura;
  double perimetro;
  double area;
};

#endif