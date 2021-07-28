#include <iostream>
using std::cerr;
using std::cout;
using std::endl;
using std::string;

#include "Empregado.h"

//Implementação

Empregado::Empregado(string Nome, string Sobrenome, int Salario)
{
  setNome(Nome);
  setSobrenome(Sobrenome);
  setSalario(Salario);
}

void Empregado::setNome(string Nome)
{
  nome = Nome;
}

string Empregado::getNome()
{
  return nome;
}

void Empregado::setSobrenome(string Sobrenome)
{
  sobrenome = Sobrenome;
}

string Empregado::getSobrenome()
{
  return sobrenome;
}

void Empregado::setSalario(int Salario)
{
  if (Salario <= 0)
  {
    salarioMensal = 0;
  }
  else
  {
    salarioMensal = Salario;
  }
}

int Empregado::getSalario()
{
  return salarioMensal;
}

void Empregado::displayEmployee()
{
  cout << "Nome: " << getNome() << endl;
  cout << "Sobrenome: " << getSobrenome() << endl;
  cout << "Salario: " << "R$" << getSalario() << endl;
  cout << " " << endl;
}

int Empregado::aumentarSalario() {

  aumento = salarioMensal * 0.10;
  salarioMensal += aumento;

  cout << "Parabens "<< getNome() << "! voce ganhou um aumento de 10%." << endl;
  cout << "Salario com aumento: " << "R$" << salarioMensal << endl;
  cout << " " << endl;
  
  return salarioMensal;
}