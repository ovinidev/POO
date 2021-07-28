#ifndef CUPOM_H
#define CUPOM_H

#include <string>

using std::string;

//Interface
class Cupom
{

public:

  Cupom(string Id, string Descricao, int Quantidade, float Valor);

  void setId(string Id);

  string getId();

  void setDescricao(string Descricao);

  string getDescricao();

  void setQuantidade(int Quantidade);

  int getQuantidade();

  void setValor(float Valor);

  float getValor();

  double calculaCupom();

  void exibirCupom();

private:
  string id, descricao;
  int quantidade;
  float valor;
  double total;
};

#endif