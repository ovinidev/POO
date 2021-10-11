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

  void cadastrar(Conta &);
  void cadastrarCorrentista(Pessoa &);
  void remover(int);
  void consultar(int);

  void exibirCorrentista(string);
  void exibirContas();

  bool salvaDados();
  bool salvaPessoas();
  bool lerDados();
  bool lerContas();

  Pessoa& getCorrentista(string);
  Conta& getConta(int);

  void visaoDoGerente(Banco &bank);

  void visaoDoCorrentista(Banco &bank, Conta &conta);

protected:
  vector<Pessoa> listaCorrentistas;
  vector<Conta> listaContas;
  int quantidadeContas = 0;
  int quantidadeCorrentistas = 0;
};

#endif