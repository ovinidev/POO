#include "Empregado.h"

int main() {
  
  Empregado empregado1("Joao", "Victor", 1000);
  Empregado empregado2("Lucas", "Bivar", 500);

  empregado1.displayEmployee();
  empregado2.displayEmployee();

  empregado1.aumentarSalario();
  empregado1.displayEmployee();

  empregado2.aumentarSalario();
  empregado2.displayEmployee();

  return 0;
}