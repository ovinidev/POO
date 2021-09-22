#include <iostream>

using std::cout;
using std::endl;
using std::ostream;
using std::string;

#include "Empresa.h"

ostream &operator<<(ostream &out, const Empresa &p)
{
  out << endl;

  return out;
}

Empresa::Empresa()
{
}

Empresa::Empresa(string name) : name(name)
{
}

void Empresa::addFuncionario(Funcionario f)
{

  this->funcionarios[contFunc] = f;

  this->contFunc++;
}

void Empresa::addCliente(Cliente f)
{

  this->clientes[contCli] = f;

  this->contCli++;
}

void Empresa::printFuncionarios()
{
  for (int i = 0; i < contFunc; i++)
  {
    cout << this->funcionarios[i] << endl;
  }
}

void Empresa::printClientes()
{
  for (int j = 0; j < contCli; j++)
  {
    cout << this->clientes[j] << endl;
  }
}

double Empresa::calcularFolhaDePagamento(){
  for (int i = 0; i < contCli; i++) {
    totalSalary = totalSalary + funcionarios[i].getSalary();
  }

  return totalSalary;
}