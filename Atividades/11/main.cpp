#include "Pessoa.h"
#include "PessoaFisica.h"
#include "PessoaJuridica.h"
#include "Agenda.h"

#include <iostream>
using std::cout;
using std::endl;

int main()
{
  Agenda agenda(4);

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

  for (int i = 0; i < 4; i++) {
    agenda.adicionaContato(contatos[i]);
  }

  agenda.buscaContato("Vinicius");
  agenda.buscaContato("15454212");

  agenda.buscaContato("Cristiano");

  cout << endl;

  cout << "============================" << endl;
  cout << "Exibindo a lista de contatos" << endl;

  agenda.listaContato();


  return 0;
}