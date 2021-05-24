class SavingAccount{
private:
  int id;
  double balance;
  double rate;
  int lastDate;
  double accumulation;
  static double total;
  void record(int date, double amount);
  double accumulate(int date) const{
    return accumulation+balance*(date-lastDate);
  }
public:
  SavingAccount(int date,int id,double rate);
  int getID() const {return id;}
  double getBalance() const {return balance;}
  double getRate() const {return rate;}
  static double getTotal(){return total;}
  void deposit(int date,double amount);
  void withdraw(int date,double amount);
  void settle(int date);
  void show() const;
};
