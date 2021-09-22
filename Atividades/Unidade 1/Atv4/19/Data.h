#ifndef DATA_H
#define DATA_H


//Interface
class Data
{

public:

  Data(int Dia, int Mes, int Ano);

  void setDia(int Dia);

  int getDia();

  void setMes(int Mes);

  int getMes();

  void setAno(int Ano);

  int getAno();

  void mostrarData();


private:
  int dia, mes, ano;
};

#endif