#include <iostream>
using std::cerr;
using std::cout;
using std::endl;

#include "Data.h"

//Implementação

Data::Data(int Dia, int Mes, int Ano)
{
  setDia(Dia);
  setMes(Mes);
  setAno(Ano);
}

void Data::setDia(int Dia)
{
  dia = Dia;
}

int Data::getDia()
{
  return dia;
}

void Data::setMes(int Mes)
{
  if (Mes > 12 or Mes <= 0)
  {
    mes = 1;
  }
  else
  {
    mes = Mes;
  }
}

int Data::getMes()
{
  return mes;
}

void Data::setAno(int Ano)
{
  ano = Ano;
}

int Data::getAno()
{
  return ano;
}

void Data::mostrarData()
{
  cout << getDia() << "/" << getMes() << "/" << getAno() << endl;
}