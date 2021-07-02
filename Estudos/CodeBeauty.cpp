#include <iostream>
#include <string>

using namespace std;

class AbstractEmployee{
  virtual void AskForPromotion() = 0;

};

class Employee:AbstractEmployee{
  string Name;
  string Company;
  int Age;

  public:
    void setName(string name){ //setter
      Name = name;
    };
    string getName(){ //getter
      return Name;
    };

    void setCompany(string company){
      Company = company;
    };
    string getCompany(){
      return Company;
    };

    void setAge(int age){
      if(age >= 18)
        Age = age;
    };
    int getAge(){
      return Age;
    };

    void IntroduceYourself();

    Employee(string name, string company, int age);

    void AskForPromotion(){
      if(Age > 30)
        cout << Name << " Got promoted!" << endl;
      else
        cout << Name << " Not promoted!" << endl;
    };
};


void Employee::IntroduceYourself(){
  cout << "Name:    " << Name << endl;
  cout << "Company: " << Company << endl;
  cout << "Age:     " << Age << endl;
  cout << " " << endl;
}

Employee::Employee(string name, string company, int age){
  Name = name;
  Company = company;
  Age = age;
};


int main(){

  Employee employee1 = Employee("Vini", "Amazon", 16);
  
  employee1.AskForPromotion();
}