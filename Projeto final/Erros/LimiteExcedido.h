#ifndef EXCEDE_LIMITE_ERROR
#define EXCEDE_LIMITE_ERROR

#include <stdexcept>
using std::out_of_range;

class LimiteExcedido : public out_of_range
{
public:
  LimiteExcedido(const char *e = "LIMITE EXCEDIDO!") : out_of_range(e) {
    
  }
};

#endif