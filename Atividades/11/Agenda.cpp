#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include "Agenda.h"
#include "Pessoa.h"

Agenda::Agenda(int tamanhodaAgenda)
{
  this->tamanhoAgenda = tamanhodaAgenda;
  this->quantidadeContados = 0;
  this->agenda = new Pessoa *[tamanhodaAgenda];
}

Agenda::~Agenda(){
  for(int i = 0; i < this->quantidadeContados; i++){
    delete agenda[i];
  }
  delete [] agenda;
}

void Agenda::adicionaContato(Pessoa *pessoa)
{
  if (this->tamanhoAgenda > this->quantidadeContados)
  {
    this->agenda[quantidadeContados] = pessoa;

    this->quantidadeContados++;
  }
}

void Agenda::buscaContato(string busca)
{
  for (int i = 0; i < this->quantidadeContados; i++)
  {
    if (busca == agenda[i]->getNome())
    {
      agenda[i]->exibirPessoa();
      return;
    }
    else if (busca == agenda[i]->getCpf())
    {
      agenda[i]->exibirPessoa();
      return;
    }
    else if (busca == agenda[i]->getCnpj())
    {
      agenda[i]->exibirPessoa();
      return;
    }
  }
}

void Agenda::removeContato(string busca)
{
  for (int i = 0; i < this->quantidadeContados; i++)
  {
    if (busca == agenda[i]->getNome())
    {
      pos = i;
    }
    else if (busca == agenda[i]->getCpf())
    {
      pos = i;
    }
    else if (busca == agenda[i]->getCnpj())
    {
      pos = i;
    }
  }

  delete agenda[pos];

  for (int i = this->pos + 1; i < this->quantidadeContados; i++){
    agenda[i - 1] = agenda[i];
  }
  
  quantidadeContados--;
}