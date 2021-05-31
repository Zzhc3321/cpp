#include <iostream>
using namespace std;

// �̳в���̳й��������
// ����������Ա���ԶԻ������κ�һ��������Ա���з���
// ����ͨ������Ķ��󣬾�ֻ�ܷ��ʸ���Ĺ��г�Ա

// ����Ĺ��г�Ա�Ͱ��ӳ�Ա���̳е��������з������Բ��䣬����Ϊ������Ĺ��г�Ա�ͱ�����Ա
// ������֮��ֻ��ͨ��������Ķ�����ʴӻ���̳еĹ��г�Ա
// ��������������ĳ�Ա����������Ķ����޷�ֱ�ӷ��ʻ����˽�г�Ա

/*
˽�м̳�

�����еĹ��г�Ա�ͱ�����Ա����˽�еĳ�Ա��ݳ�������������
�������˽�г�Ա���������в���ֱ�ӷ���

*/


/*
�����̳�

����Ĺ��г�Ա�ͱ�����Ա���ѱ�����Ա����ݳ�������������
�������˽�г�Ա����ֱ�ӷ���

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
