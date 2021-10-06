#ifndef SALDO_INUFICIENTE_ERROR
#define SALDO_INUFICIENTE_ERROR

#include <stdexcept>
using std::out_of_range;

class saldoInsuficiente : public out_of_range
{
public:
  saldoInsuficiente(const char *e = "SALDO INSUFICIENTE!") : out_of_range(e) {
    
  }
};

#endif