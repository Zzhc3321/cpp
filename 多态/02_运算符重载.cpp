#include <iostream>
using namespace std;

typedef unsigned short USHORT;

class Counter
{
public:
  Counter();
  Counter(USHORT initialValue);
  ~Counter(){}
  USHORT GetItsVal()const { return itsVal; }
  void SetItsVal(USHORT x) {itsVal = x; }
  Counter operator+ (const Counter &);
private:
  USHORT itsVal;
};

Counter::Counter(USHORT initialValue):itsVal(initialValue){}

Counter::Counter():itsVal(0){}

Counter Counter::operator+ (const Counter & rhs){
  return Counter(itsVal + rhs.GetItsVal());//返回无明对象
}

int main(){
  Counter varOne(2),varTwo(4),varThree;
  varThree = varOne + varTwo;
  cout << "varOne: " << varOne.GetItsVal()<< endl;
  cout << "varTwo: " << varTwo.GetItsVal() << endl;
  cout << "varThree: " << varThree.GetItsVal() << endl;
  return 0;
}
