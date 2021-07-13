#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string user, newUser;

  getline(cin, user);

  for(int i = 0; i <= static_cast<int>(user.size()); i++) {
    if(user[i] != ' ' 
      and user[i] != '!' 
      and user[i] != '?' 
      and user[i] != '.' 
      and user[i] != ',' 
      and user[i] != ':' 
      and user[i] != ';' 
      and user[i] != '.'  
      and user[i] != '-' 
      and user[i] != '(' 
      and user[i] != ')' 
      and user[i] != '"') {
      newUser += user[i];
    }
  }
  
  cout << newUser << endl;


  return 0;
}
