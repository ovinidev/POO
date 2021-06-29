#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

using namespace std;

class Aviao{
  public:
    int velocidade = 0;
    int velocidadeMax = 0;
    string tipo;

    //Método Construtor (Possui o nome da classe)
    Aviao(int type);
    void Exibir();
};

//Método construtor é executado automaticamente ao instanciar um objeto da classe Aviao

// 1 = Jato  2 = Monomotor  3 = Planador
Aviao::Aviao(int type){ 
  if(type == 1){
    tipo = "Jato"; //Não precisa do this pq está no método construtor
    velocidadeMax = 800;
  }

  if(type == 2){
    tipo = "Monomotor";
    velocidadeMax = 700;
  }

  if(type == 3){
    tipo = "Planador";
    velocidadeMax = 500;
  }

}

void Aviao::Exibir(){
  cout << "Tipo:              " << tipo << endl;
  cout << "Velocidade atual:  " << velocidade << endl;
  cout << "Velocidade máxima: " << velocidadeMax << endl;
  cout << "" << endl;
}


#endif