#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

template <class T>
bool comparar(const T &a1, const T &a2)
{
  if (a1 == a2) {
    return true;
  }

  return false;
}

int main() {
  cout << "vini == vi ? " << comparar<string>("vini","vi") << endl;
  cout << "vini == vini ? " << comparar<string>("vini","vini") << endl;
  cout << "5 == 3 ? " << comparar(5, 3) << endl;
  cout << "2.5 == 2.3 ? " << comparar(2.5, 2.3) << endl;
  cout << "3.5 == 3.5 ? " << comparar(3.5, 3.5) << endl;

  return 0;
}