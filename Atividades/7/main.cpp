#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::cerr;

#include "VelocidadeZero.h"

double velocidade(double d, double t)
{
  if (d == 0 or t == 0)
    throw VelocidadeZero();
  
  return d/t;
}

int main() {
  double vel, dist, tempo;
  int obj = 1;

  cout << "Calculando a velocidade de 3 objetos: " << endl;

  while (obj <= 3)
  {
    cout << "Objeto " << obj << ": " << endl;
    cout << " Distancia (m): ";
    cin >> dist;
    cout << " Tempo (s): ";
    cin >> tempo;

    try
    {
      vel = velocidade(dist,tempo);
      cout << " Velocidade " << vel << " m/s" << endl;
    }
    catch(VelocidadeZero &e)
    {
      cerr << e.what() << endl;
      obj--;
    }
    
    obj++;
  }

  return 0;
}