#ifndef ANIMAL_H
#define ANIMAL_H

using std::string;

class Animal
{
protected:
  string name;
  string breed;
  
public:
  Animal();

  Animal(string);

  string walk();


private:

};

#endif
