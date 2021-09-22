#include <iostream>
#include <string>

using std::cout;
using std::endl;

template <class T>
class Fila
{
public:
  Fila();
  ~Fila();

  void insereElementos(const T &val);
  void retiraElementos();
  void print();

private:
  T *listaFila;
  int tam;
  int aux;
};

template <class T>
Fila<T>::Fila()
{
  tam = 0;
  listaFila = new T[10];
}

template <class T>
Fila<T>::~Fila()
{
  delete[] listaFila;
}

template <class T>
void Fila<T>::insereElementos(const T &val)
{
  if (tam < 10)
  {
    listaFila[tam] = val;
    cout << "Inserindo " << listaFila[tam] << endl;
    tam++;
  }
  else
    cout << "Fila cheia!!! valor: " << val << " nao inserido!" << endl;
}

template <class T>
void Fila<T>::retiraElementos()
{
  if (tam > 0)
  {
    tam--;
    cout << "Removendo " << listaFila[aux] << " da fila" << endl;
    listaFila[aux] = NULL;
    aux++;
  }
  else
    cout << "Fila vazia!!!" << endl;
}

template <class T>
void Fila<T>::print()
{
  for (int i = 0; i < tam; i++)
    cout << "Exibindo elemento do índice: " << i << " = " << listaFila[i] << endl;

  cout << endl;
}
