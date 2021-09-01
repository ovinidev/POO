#include "Pessoa.h"
#include "PessoaFisica.h"
#include "PessoaJuridica.h"
#include "Agenda.h"

#include <iostream>
using std::cout;
using std::endl;

int main()
{
  Pessoa *contatos[] = {
      new PessoaFisica("Vini", "Rua Joao Pessoa", "vini@medeiros.com", "14514010", "14/04/2002", "Solteiro"),
      new PessoaJuridica("Juca", "Rua Antenor Navarro", "juca@email.com", "154105", 221215, "trabalhador"),
  };

  for (int i = 0; i < 2; i++)
  {
    contatos[i]->exibirPessoa();
  }

  return 0;
}