#include <iostream>
#include <string>

using namespace std;

class Time {
  public:
    string nome;
    string cor;
    string estado;
    int titulos;

    void mostrarTime();

};

void Time::mostrarTime(){
  this -> nome = "Flamengo";
  this -> cor = "Vermelho";
  this -> estado = "Rio";
  this -> titulos = 8;

};

int main() {

  Time *time1 = new Time();

  time1 -> mostrarTime();

  cout << time1 -> nome << endl;
  cout << time1 -> cor << endl;
  cout << time1 -> estado << endl;
  cout << time1 -> titulos << endl;

  return 0;
}