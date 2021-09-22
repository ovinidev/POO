#include <iostream>
using std::cout;
using std::endl;
using std::ostream;
using std::string;

#include "Pessoa.h"

Pessoa::Pessoa(string nome, string endereco, string email) : nome(nome), endereco(endereco), email(email)
{
}
