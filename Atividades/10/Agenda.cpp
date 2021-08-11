#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include "Agenda.h"
#include "Pessoa.h"

Agenda::Agenda(int tPessoas)
{
  pessoas = new Pessoa[tPessoas];
  qtdePessoas = 0;
}

Agenda::~Agenda()
{
  delete[] pessoas;
}

void Agenda::armazenaPessoa(string nome, int idade, float altura)
{
  armazenaPessoa(Pessoa(nome, idade, altura));
}
void Agenda::armazenaPessoa(const Pessoa &p)
{
  pessoas[qtdePessoas++] = p;
}

void Agenda::removePessoa(string nome)
{

  for (int i = buscaPessoa(nome); i < qtdePessoas; i++)
  {
    cout << "i" << endl;
    pessoas[i - 1] = pessoas[i];
  }
  qtdePessoas--;
}

int Agenda::buscaPessoa(string nome) const
{
  for (int i = 0; i < qtdePessoas; i++)
  {
    if (pessoas[i].getName() == nome)
      return 1 + i;
  }

  return 0;
}
void Agenda::imprimePovo() const
{
  for (int i = 0; i < qtdePessoas; i++)
  {
    pessoas[i].print();
  }
}
void Agenda::imprimePessoa(int i) const
{
  pessoas[--i].print();
}