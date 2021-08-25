#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "PessoaJuridica.h"

#include <string>
using std::string;

class Funcionario: public PessoaJuridica
{
  friend ostream &operator<<(ostream &, const Funcionario&);

protected:

public:
  Funcionario();

  Funcionario(string, int, double, int, int);

  double calculaSalarioBruto();

  void setName(string);

  string getName() const {return this->name;}

  void setMatriculation(int);

  int getMatriculation() const {return this->matriculation;}

  void setSalary(double);

  double getSalary() const {return this->salary;}

  void setMonthlyWorkload(int);

  int getMonthlyWorkload() const {return this->monthlyWorkload;}

  void setHoursWorkedInMonth(int);

  int getHoursWorkedInMonth() const {return this->hoursWorkedInMonth;}

private:
  double grossSalary;
  string name;
  int matriculation;
  double salary;
  int monthlyWorkload;
  int hoursWorkedInMonth;
};

#endif
