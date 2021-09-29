#include "Pessoa.h"
#include "PessoaFisica.h"
#include "PessoaJuridica.h"

#include <iostream>
using std::cout;
using std::endl;

int main()
{

  Pessoa *contatos[] = {
    new PessoaFisica("Vinicius", "Rua Joao Pessoa", "vini@gmail.com", 
    "14514010", "14/04/2002", "Solteiro"),
    new PessoaFisica("Ingrid", "Rua Castelo Branco", "suzi@hotmail.com", 
    "15454212", "14/11/2005", "Solteiro"),
    new PessoaJuridica("Juca", "Rua Antenor Navarro", "juca@email.com", 
    "154105", 221215, "MEI"),
    new PessoaJuridica("Stephan", "Central Park", "steph77@gmail.com", 
    "411212", 121235, "MEI"),
  };

  contatos[0]->exibirPessoa();


  return 0;
}