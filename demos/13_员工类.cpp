#include <iostream>
using namespace std;
#include <cstring>

class Employee{
private:
  char name[30];
  char street[30];
  char city[18];
  char zip[6];
public:
  Employee(char*,char*,char*,char*);
  void change_name(char *n);
  void display();
};

Employee::Employee(char* n,char* ct,char* str,char* z){
  strcpy(name,n);
  strcpy(city,ct);
  strcpy(street,str);
  strcpy(zip,z);
}

void Employee::change_name(char* n){
  strcpy(name,n);
}

void Employee::display(){
  cout<<name<<' '<<city<<' '<<street<<' '<<zip<<endl;
}

int main(){
  Employee e1("����","����","������","100000");
  e1.display();
  e1.change_name("����");
  e1.display();

  return 0;
}
