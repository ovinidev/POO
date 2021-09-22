#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string simbol;

  for(int i = 0; i <= 4; i++) {

    for(int j = 0; j <= i; j++) {
      cout << '*';
    }
    cout << endl;
  }

  cout << " " << endl;

  for(int i = 0; i <= 4; i++) {
    int v = 4 - i;

    for(int j = 0; j <= i-1; j++) {
      cout << ' ';
    }

    for(int j = 0; j <= v; j++) {
      cout << '*';

    }
      cout << endl;
  }
  


  return 0;
}
