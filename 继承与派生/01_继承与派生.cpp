#include <iostream>
using namespace std;

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
