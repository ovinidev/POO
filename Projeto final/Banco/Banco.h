#ifndef BANCO_H
#define BANCO_H

#include <string>
#include "../Pessoa/Pessoa.h"
#include "../Pessoa/PessoaJuridica.h"
#include "../Conta/Conta.h"

#include <vector>
using std::vector;

using std::string;

class Banco: public PessoaJuridica
{
public:
  Banco(string, string, long int);
  ~Banco();

  void cadastrar(Conta &conta);
  void remover(int);
  // void consultar(int);
  // void atualizar(Conta &, int);

  // void cadastraCorrentista(Pessoa &);

  // void listaCorrentista(Pessoa &);
  void exibirContas();

  // Pessoa &buscaCorrentista(string);
  // Conta &buscaConta(int);

protected:
  vector<Pessoa> listaCorrentistas;
  vector<Conta> listaContas;
  int quantidadeContas = 0;
  int quantidadeCorrentistas = 0;
};

#endif