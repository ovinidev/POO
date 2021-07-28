#include <iostream>
using std::cerr;
using std::cout;
using std::endl;
using std::string;

#include "Cupom.h"

//Implementação

Cupom::Cupom(string Id, string Descricao, int Quantidade, float Valor)
{
  setId(Id);
  setDescricao(Descricao);
  setQuantidade(Quantidade);
  setValor(Valor);
}

void Cupom::setId(string Id)
{
  id = Id;
}

string Cupom::getId()
{
  return id;
}

void Cupom::setDescricao(string Descricao)
{
  descricao = Descricao;
}

string Cupom::getDescricao()
{
  return descricao;
}

void Cupom::setQuantidade(int Quantidade)
{
  if (Quantidade <= 0)
  {
    quantidade = 0;
  }
  else
  {
    quantidade = Quantidade;
  }
}

int Cupom::getQuantidade()
{
  return quantidade;
}

void Cupom::setValor(float Valor)
{
  if (Valor <= 0)
  {
    valor = 0;
  }
  else
  {
    valor = Valor;
  }
}

float Cupom::getValor()
{
  return valor;
}

double Cupom::calculaCupom()
{

  total = quantidade * valor;

  cout << "Valor total: R$" << total << endl;
  cout << endl;

  return total;
}

void Cupom::exibirCupom()
{
  cout << "ID: " << getId() << endl;
  cout << "Descricao: " << getDescricao() << endl;
  cout << "Quantidade: " << getQuantidade() << endl;
  cout << "Preço: R$" << getValor() << endl;
  cout << endl;
}