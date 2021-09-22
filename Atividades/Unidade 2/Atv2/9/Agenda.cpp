#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include "Agenda.h"
#include "Pessoa.h"

void Agenda::armazenaPessoa(string nome, int idade, float altura)
{
  armazenaPessoa(Pessoa(nome, idade, altura));
}
void Agenda::armazenaPessoa(const Pessoa &p)
{
  pessoas[tamanhoAgenda++] = p;
}

void Agenda::removePessoa(string nome)
{

  for (int i =  buscaPessoa(nome); i < tamanhoAgenda; i++)
  {
    cout << "i" << endl;
    pessoas[i - 1] = pessoas[i];
  }
  tamanhoAgenda--;
}

int Agenda::buscaPessoa(string nome) const
{
  for (int i = 0; i < tamanhoAgenda; i++)
  {
    if (pessoas[i].getName() == nome)
      return 1 + i;
  }

  return 0;
}
void Agenda::imprimePovo() const
{
  for (int i = 0; i < tamanhoAgenda; i++)
  {
    pessoas[i].print();
  }
}
void Agenda::imprimePessoa(int i) const
{
  pessoas[--i].print();
}