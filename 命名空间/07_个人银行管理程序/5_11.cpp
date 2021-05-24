#include "account.cpp"
#include <iostream>
using namespace std;

int main(){
  SavingAccount sa0(1,21325302,0.015);
  SavingAccount sa1(1,58320212,0.015);

  sa0.deposit(5,5000);
  sa1.deposit(25,10000);
  sa0.deposit(45,5500);
  sa1.withdraw(60,4000);

  sa0.settle(90);
  sa1.settle(90);

  sa0.show();
  sa1.show();

  cout<<"Total num : "<<SavingAccount::getTotal()<<endl;

  return 0;
}
