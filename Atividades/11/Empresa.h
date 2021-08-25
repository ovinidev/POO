#ifndef EMPRESA_H
#define EMPRESA_H

using std::string;
using std::ostream;

#include <iostream>

#include "Funcionario.h"
#include "Cliente.h"

class Empresa
{
  friend ostream &operator<<(ostream &, const Empresa&);

protected:
  string name;
  
public:
  Empresa();
  
  Empresa(string);

  void addFuncionario(Funcionario);

  void addCliente(Cliente);

  void printFuncionarios();

  void printClientes();

private:
  Funcionario funcionarios[5];
  Cliente clientes[5];
  int contFunc = 0;
  int contCli = 0;
};

#endif
