#include <iostream>
#include <string>

using namespace std;

class Employee{
  private:
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

  Employee employee1 = Employee("Name", "Company", 16);
  
  employee1.setAge(12);
  employee1.setName("Vina");
  employee1.getAge();
  employee1.getName();
  employee1.IntroduceYourself();

  cout << employee1.getName() << " have " << employee1.getAge() << " years old " << endl;

}