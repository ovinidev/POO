#ifndef PESSOA_H
#define PESSOA_H

using std::string;

class Pessoa
{
public:
  Pessoa(){};
  Pessoa(string, int, double);

  void setName(string);
  string getName() const { return name; }

  void setAge(int);
  int getAge() const { return age; }

  void setHeight(double);
  double getHeight() const { return height; }

  void print() const;

private:
  string name;
  int age;
  double height;
};

#endif