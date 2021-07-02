#include <iostream>
#include <string>

using namespace std;

class Player{
  private:
    string Name;
    string Position;
    string MainChamp;
    string Team;
    int Titles;
  
  public:
    void setName(string name){
      Name = name;
    }
    string getName(){
      return Name;
    }

    void setPosition(string position){
      Position = position;
    }
    string getPosition(){
      return Position;
    }

    void setMainChamp(string mainChamp){
      MainChamp = mainChamp;
    }
    string getMainChamp(){
      return MainChamp;
    }

    void setTeam(string team){
      Team = team;
    }
    string getTeam(){
      return Team;
    }

    void setTitles(int titles){
      Titles = titles;
    }
    int getTitles(){
      return Titles;
    }

    void ShowProfilePlayer();

    Player(string Name, string Position, string MainChamp, string Team, int Titles);

};

void Player::ShowProfilePlayer(){
  cout << "Name:            " << Name << endl;
  cout << "Player position: " << Position << endl;
  cout << "Main champ:      " << MainChamp << endl;
  cout << "Team:            " << Team << endl;
  cout << "Titles:          " << Titles << endl;
  cout << "" << endl;
};

Player::Player(string name, string position, string mainChamp, string team, int titles){
  Name = name;
  Position = position;
  MainChamp = mainChamp;
  Team = team;
  Titles = titles;

};

int main(){

  Player player1 = Player("brTT", "adc", "Vayne", "Pain Gaming", 5);
  player1.ShowProfilePlayer();

  return 0;
}