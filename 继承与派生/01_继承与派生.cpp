#include <iostream>
using namespace std;

// 继承不会继承构造和析构
// 基类的自身成员可以对基类中任何一个其他成员进行访问
// 但是通过基类的对象，就只能访问该类的公有成员

// 基类的公有成员和包队成员被继承到派生类中访问属性不变，仍作为派生类的公有成员和保护成员
// 在类族之外只能通过派生类的对象访问从基类继承的公有成员
// 而无论是派生类的成员还是派生类的对象都无法直接访问基类的私有成员

/*
私有继承

基类中的公有成员和保护成员都以私有的成员身份出现在派生类中
而基类的私有成员在派生类中不可直接访问

*/


/*
保护继承

基类的公有成员和保护成员都已保护成员的身份出现在派生类中
而基类的私有成员不可直接访问

*/
class Account{
private:
  string id;
  double balance;
  static double total;
protected:
  Acount(const Date &date,const std::string &id);
  void record(const Date &date,double amount, const std::string &desc);
  void error(const std::string &msg) const;
public:
  const std::string &getId() const {return id;}
  double getBalance const{return balance;}
  void show() const;
};

class CreditAccount : public Account{
private:
  Accumulator acc;
  double credit;
  double rate;
  double fee;
  double getDebt() const;
public:
  CreditAccount(const Date &date,const std::string &id,double credit,double rate,double fee);
  double getCredit() const;
  double getRate() const;
  double getFee() const;
  double getAvailableCredit();
  void deposit(const Date &date,double amount, const std::string &desc);
  void withdraw(const Date &date,double amount,const std::string &desc);
  void settle(const Date &date);
  void show() const;
};

int main(){

  return 0;
}
