#include <iostream>

using std::cout;
using std::endl;
using std::string;

class AbstractEmployee {
  virtual void AskForPromotion() = 0;

};

class Employee:AbstractEmployee {
  string Company;
  int Age;

  protected:
  string Name;

  public:
    void setName(string name) { //setter
      Name = name;
    };
    string getName(){ //getter
      return Name;
    };

    void setCompany(string company) {
      Company = company;
    };
    string getCompany() {
      return Company;
    };

    void setAge(int age) {
      if(age >= 18)
        Age = age;
    };
    int getAge(){
      return Age;
    };

    void IntroduceYourself();

    Employee(string name, string company, int age); // Constructor

    void AskForPromotion() {
      if(Age >= 30)
        cout << getName() << " Got promoted!" << endl;
      else
        cout << getName() << " Not promoted!" << endl;
    };

    virtual void Work() {
      cout << getName() << " is checking email" << endl;
    }
};

class Developer:public Employee {
  public:
    string Languages;

    void setLanguage(string language) {
      Languages = language;
    };
    string getLanguage() {
      return Languages;
    };

    Developer(string name, string company, int age, string languages)
    :Employee(name, company, age) {
      Languages = languages;
    };
    
    void FixBug(){
      cout << getName() << " fixed bug using " << Languages << endl; 
    };

    void Work() {
      cout << getName() << " is programing now in " << getLanguage() << endl;
    }
};

void Employee::IntroduceYourself() {
  cout << "Name:    " << Name << endl;
  cout << "Company: " << Company << endl;
  cout << "Age:     " << Age << endl;
  cout << " " << endl;
}

Employee::Employee(string name, string company, int age) {
  Name = name;
  Company = company;
  Age = age;
};

class Engineer:public Employee {
  protected:
    int Salary;

  public:
    void RepairEquipment() {
      cout << getName() << " Concerted" << endl;
    
    };
    int getSalary() {
      return Salary;
    };

    Engineer(string name, string company, int age, int salary)
    :Employee(name, company, age) {
      Salary = salary;
    };

    void Work() { // Quando uma função virtual é invocada, ela fica globalmente
      cout << getName() << " is geting $" << getSalary() << " dolars" << endl;
    };

};


int main(){

  Employee employee1 = Employee("Vini", "Tabajaras", 23);
  
  Developer dev1 = Developer("Vick", "Spotify", 19, "python");

  Engineer eng1 = Engineer("Arthur", "Netflix", 29, 55);


  Employee *e1 = &dev1;
  Employee *e2 = &eng1;

  dev1.FixBug();

  e1 -> Work();
  e2 -> Work();

  e1 -> setAge(30);
  e1 -> getAge();
  eng1.setName("oi");
  eng1.getName();

  eng1.setName("Vini");
  eng1.getName();

}