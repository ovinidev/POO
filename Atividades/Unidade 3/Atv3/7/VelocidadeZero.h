#ifndef VELOCIDADE_ZERO_H
#define VELOCIDADE_ZERO_H

#include <stdexcept>

class VelocidadeZero : public std::runtime_error
{
public:
  VelocidadeZero(const char *e="Velocidade não pode ser zero."): runtime_error(e) {}
};

#endif