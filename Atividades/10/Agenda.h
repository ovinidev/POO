#ifndef AGENDA_H
#define AGENDA_H

using std::string;

#include "Pessoa.h"

class Agenda
{
public:
  Agenda(int tPessoas = 1);
  ~Agenda();
  void armazenaPessoa(string nome, int idade, float altura);
  void armazenaPessoa(const Pessoa &p);

  void removePessoa(string nome);

  int buscaPessoa(string nome) const; // informa em que posição da agenda está a pessoa
  void imprimePovo() const;           // imprime todos os dados de todas as pessoas da agenda
  void imprimePessoa(int i) const;    // imprime os dados da pessoa que está na posição 'i' da agenda
private:
  Pessoa *pessoas;
  int qtdePessoas;
};

#endif
