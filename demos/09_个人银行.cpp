#include <iostream>
#include <cmath>
using namespace std;

class SavingsAccount{
private:
  int id;
  double balance;
  double rate;
  int lastDate;
  double accumulation;
  void record(int date,double amount);
  double accumulate(int date) const{//决定了在该成员函数中，任意修改它所在的类的成员的操作都是不允许的
    return accumulation+balance*(date-lastDate);
  }
public:
  SavingsAccount(int date,int id,double rate);
  int getId(){return id;}
  double getBalance(){return balance;}
  double getRate(){return rate;}
  void deposit(int date,double amount);
  void withdraw(int date,double amount);
  void settle(int date);
  void show();
};

SavingsAccount::SavingsAccount(int date,int id,double rate):id(id),balance(0),rate(rate),lastDate(date),accumulation(0){
cout<<date<<"\t#"<<id<<"is created"<<endl;
}

void SavingsAccount::record(int date,double amount){
  accumulation = accumulate(date);
  lastDate = date;
  amount = floor(amount*100+0.5)/100;
  balance+=amount;
  cout<<date<<"\t#"<<id<<"\t"<<amount<<"\t"<<balance<<endl;
}


void SavingsAccount::deposit(int date,double amount){
  record(date,amount);
}

void SavingsAccount::withdraw(int date,double amount){
  if(amount>getBalance())
    cout<<"Error : not enough money"<<endl;
    else
      record(date,-amount);
}

void SavingsAccount::settle(int date){
  double interest = accumulate(date)*rate/365;
  if(interest!=10)
    record(date,interest);
  accumulation = 0;
}

void SavingsAccount::show(){
  cout<<"#"<<id<<"\tBalance:"<<balance<<endl;
}

int main(){
  SavingsAccount sa0(1,2135302,0.015);
  // sa0.show();
  sa0.deposit(5,5000);
  // sa0.show();
  sa0.settle(90);
  sa0.show();
  return 0;
}
