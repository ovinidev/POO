#ifndef TRANSACAO_H
#define TRANSACAO_H

#include <string>

using std::string;


class Transacao
{
public:
  Transacao();
  Transacao(string data, double valor, string descricao) : data(data), valor(valor), descricao(descricao){

  }

protected:
  string data;
  double valor;
  string descricao;
};

#endif