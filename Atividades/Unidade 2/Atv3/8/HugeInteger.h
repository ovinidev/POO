#ifndef HUGEINTEGER_H
#define HUGEINTEGER_H

#include <ostream>

using std::ostream;

class HugeInteger
{

  friend ostream &operator<<(ostream &, const HugeInteger &);

public:
  HugeInteger(const char * = "");
  void input(const char *);

  void output() const;

  void add(const HugeInteger &);

  bool isEqualTo(const HugeInteger &) const;

  bool isNotEqualTo(const HugeInteger &n2) const
  {
    return !isEqualTo(n2);
  }

  bool isGreaterThan(const HugeInteger &) const;

  bool isLessThan(const HugeInteger &n2) const
  {
    return n2.isGreaterThan(*this);
  }

  bool isGreaterThanOrIqual(const HugeInteger &n2) const
  {
    return !(n2.isGreaterThan(*this));
  }

  bool isLessThanOrIqual(const HugeInteger &n2) const
  {
    return !isGreaterThan(n2);
  }

  const HugeInteger &operator+(const HugeInteger &);

  const HugeInteger &operator+=(const HugeInteger &);

  const HugeInteger &operator-=(const HugeInteger &);

  const HugeInteger &operator=(const HugeInteger &);

  bool operator==(const HugeInteger);

  bool operator!=(const HugeInteger);

  bool operator>(const HugeInteger);

  bool operator<(const HugeInteger);

  bool operator>=(const HugeInteger);

  bool operator<=(const HugeInteger);


private:
  char num[40];
  int tam;

  bool validar(const char *);
};

#endif