#include <iostream>
#include <string>

using namespace std;

class AbstractEmployee{
  virtual void AskForPromotion() = 0;

};

class Employee:AbstractEmployee{
  string Company;
  int Age;

  protected:
  string Name;

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

class Developer:public Employee{
  public:
    string Languages;

    Developer(string name, string company, int age, string languages)
    :Employee(name, company, age){
      Languages = languages;
    }
    
    void FixBug(){
      cout << getName() << " fixed bug using " << Languages << endl; 
    }
};

class Engineer:public Employee{
  private:
    int Salary;

  public:
    void RepairEquipment(){
      cout << getName() << " Concerted" << endl;
    
    }
    void ShowSalary(){
      cout << Salary << endl;
    }

    Engineer(string name, string company, int age, int salary)
    :Employee(name, company, age){
      Salary = salary;
    }

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

  Developer dev1 = Developer("Vick", "Spotify", 19, "python");
  dev1.FixBug();
  dev1.IntroduceYourself();

  Engineer eng1 = Engineer("Arthur", "Netflix", 29, 55);
  eng1.IntroduceYourself();
  eng1.RepairEquipment();
}