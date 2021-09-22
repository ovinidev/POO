#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include "Funcionario.h"

ostream &operator<<(ostream &out, const Funcionario &p)
{
  out << "Name: " << p.getName() << endl;
  out << "Matriculation: " << p.getMatriculation() << endl;
  out << "Salary: " << p.getSalary() << endl;
  out << "Monthly Workload: " << p.getMonthlyWorkload() << endl;
  out << "Hours WorkedInMonth: " << p.getHoursWorkedInMonth() << endl;

  return out;
}

Funcionario::Funcionario(){
}

Funcionario::Funcionario(string name, int matriculation, double salary, int monthlyWorkload, int hoursWorkedInMonth) : 
name(name), matriculation(matriculation), salary(salary), monthlyWorkload(monthlyWorkload), hoursWorkedInMonth(hoursWorkedInMonth)
{
  setMonthlyWorkload(monthlyWorkload);
  setHoursWorkedInMonth(hoursWorkedInMonth);
  setName(name);
  setMatriculation(matriculation);
  setSalary(salary);
}

double Funcionario::calculaSalarioBruto() {

  grossSalary = getSalary() * getHoursWorkedInMonth() / getMonthlyWorkload();
  cout << getSalary() << endl;
  cout << getMonthlyWorkload() << endl;
  cout << getHoursWorkedInMonth() << endl;
  
  return grossSalary;
}

void Funcionario::setName(string name){
  this->name = name;
}

void Funcionario::setMatriculation(int matriculation){
  this->matriculation = matriculation;
}

void Funcionario::setSalary(double salary){
  this->salary = salary;
}

void Funcionario::setMonthlyWorkload(int monthlyWorkload){
  this->monthlyWorkload = monthlyWorkload;
}

void Funcionario::setHoursWorkedInMonth(int hoursWorkedInMonth){
  if (hoursWorkedInMonth > this->monthlyWorkload) {
    cout << "Horas de trabalho maior que a carga horária!" << endl;
    this->hoursWorkedInMonth = 0;

  } else if (hoursWorkedInMonth <= 0) {
    cout << "Horas de trabalho inferior a 0!" << endl;
    this->hoursWorkedInMonth = 0;

  } else {
    this->hoursWorkedInMonth = hoursWorkedInMonth;
  }
}
