#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using std::string;


class Pessoa
{

protected:
  string nome;
  string email;

public:
  Pessoa(string, string);

  string getNome() const { return nome; };

  string getEmail() const { return email; };

  virtual string getCpf() const = 0;

  virtual string getCnpj() const = 0;

  virtual void exibirPessoa() const = 0;

private:
};

#endif
