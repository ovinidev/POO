#include <iostream>
#include <string>
#include "aviao.h"

using namespace std;

int main() {

  Aviao *model1 = new Aviao(1);
  Aviao *model2 = new Aviao(3);
  Aviao *model3 = new Aviao(2);

  model1 -> Exibir();
  model2 -> Exibir();
  model3 -> Exibir();


  return 0;
}