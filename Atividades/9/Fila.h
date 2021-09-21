#include <iostream>
#include <string>

using std::cerr;
using std::cout;
using std::endl;

#include <stdexcept>
using std::range_error;
using std::runtime_error;

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
  try
  {
    if (tam < 10)
    {
      listaFila[tam] = val;
      cout << "Inserindo " << listaFila[tam] << endl;
      tam++;
    }
    else
    {
      throw runtime_error("Fica cheia!!!!");
    }
  }
  catch (runtime_error &e)
  {
    cerr << e.what() << endl;
  }
}

template <class T>
void Fila<T>::retiraElementos()
{
  try
  {
    if (tam > 0)
    {
      tam--;
      cout << "Removendo " << listaFila[aux] << " da fila" << endl;
      listaFila[aux] = NULL;
      aux++;
    }
    else
    {
      throw runtime_error("Fica vazia!!!!");
    }
  }
  catch (runtime_error &e)
  {
    cerr << e.what() << endl;
  }
}

template <class T>
void Fila<T>::print()
{
  for (int i = 0; i < tam; i++)
    cout << "Exibindo elemento do índice: " << i << " = " << listaFila[i] << endl;

  cout << endl;
}
