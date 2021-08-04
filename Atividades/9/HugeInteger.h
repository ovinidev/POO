#ifndef RETANGULO_H
#define RETANGULO_H

class HugeInteger
{
public:
  void input(std::string);

  void output();

  void add(HugeInteger);

private:
  char array[40];
  int digits;
};

#endif