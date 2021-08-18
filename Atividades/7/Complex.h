#ifndef COMPLEX_H
#define COMPLEX_H

using std::ostream;

class Complex
{

  friend ostream &operator<<(ostream &, const Complex &);

public:
  const Complex &operator+(const Complex &);

  const Complex &operator-(const Complex &);

  const Complex &operator+=(const Complex &);
  const Complex &operator-=(const Complex &);

  Complex &operator++();
  Complex operator++(int);

  Complex &operator--();
  Complex operator--(int);

  void print() const;

  Complex(int real, int imaginaria);

private:
  int real, imaginaria;
  double parteReal, parteImaginaria;
};

#endif
