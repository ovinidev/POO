#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  int 
    kilometragemT1 = 0, 
    kilometragemT2 = 0, 
    kilometragemT3 = 0, 
    litroConsumidoTotal;
      
  double 
    gasolinaTanque1, 
    gasolinaTanque2, 
    gasolinaTanque3,
    consumoT1, 
    consumoT2, 
    consumoT3;


  while(kilometragemT1 != -1 and kilometragemT2 != -1 and kilometragemT3 != -1) {
    cout << "km percorrido no tanque 1:" << endl;
    cin >> kilometragemT1;
    if(kilometragemT1 == -1) break;
    cout << "Quantidade de gasolina utilizada tanque 1:" << endl;
    cin >> gasolinaTanque1;

    cout << "km percorrido no tanque 2:" << endl;
    cin >> kilometragemT2;
    if(kilometragemT2 == -1) break;
    cout << "Quantidade de gasolina utilizada tanque 2:" << endl;
    cin >> gasolinaTanque2;

    cout << "km percorrido no tanque 3:" << endl;
    cin >> kilometragemT3;
    if(kilometragemT3 == -1) break;
    cout << "Quantidade de gasolina utilizada tanque 3:" << endl;
    cin >> gasolinaTanque3;

    consumoT1 = kilometragemT1 / gasolinaTanque1;
    consumoT2 = kilometragemT2 / gasolinaTanque2;
    consumoT3 = kilometragemT3 / gasolinaTanque3;

    litroConsumidoTotal = gasolinaTanque1 + gasolinaTanque2 + gasolinaTanque3;
    
    cout << "Consumo de Km/L no tanque 1: " << consumoT1 << endl;
    cout << "Consumo de Km/L no tanque 2: " << consumoT2 << endl;
    cout << "Consumo de Km/L no tanque 3: " << consumoT3 << endl;
    cout << "Consumo de litros total: " << litroConsumidoTotal << "L" << endl;
    cout << " " << endl;
    
  }

  return 0;
}
