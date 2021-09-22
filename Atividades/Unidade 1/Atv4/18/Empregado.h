#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <string>
using std::string;

//Interface
class Empregado
{

public:
  Empregado(string Nome, string Sobrenome, int Salario);

  void setNome(string Nome);

  string getNome();

  void setSobrenome(string Sobrenome);

  string getSobrenome();

  void setSalario(int Salario);
  
  int getSalario();

  void displayEmployee();

  int aumentarSalario();

private:
  string nome, sobrenome;
  int salarioMensal, aumento;
};

#endif