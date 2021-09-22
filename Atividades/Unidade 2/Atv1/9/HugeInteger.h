#ifndef RETANGULO_H
#define RETANGULO_H

class HugeInteger
{
public:
  void input(std::string);

  void output();

  void add(HugeInteger);

  bool isEqualTo(HugeInteger);

  bool isNotEqualTo(HugeInteger);

  bool isGreaterThan(HugeInteger);

  bool isLessThan(HugeInteger);

  bool isGreaterThanOrIqual(HugeInteger);

  bool isLessThanOrIqual(HugeInteger);


private:
  char array[40];
  int digits;
  int newArray;
  int newArrayObject;
  int size;
  int carry = 0;
};

#endif