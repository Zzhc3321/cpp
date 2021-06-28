#include <iostream>
using namespace std;

class Base{
public:
  int pub = 0;
  int get_pro(){return pro;}
  int get_pri(){return pri;}
protected:
  int pro = 1;
private:
  int pri = 2;
};

class Derived:public Base{
public:
  int dpro = pro;
  // int dpri = pri;
};

class Derived1:protected Base{
public:
  int d1pub = pub;
  int d1pro = pro;
};

class Derived2:private Base{
public:
  int d2pub = pub;
  int d2pro = pro;
};

int main(){
  Base b;
  Derived d;
  Derived1 d1;
  Derived2 d2;

  cout<<b.pub<<endl;
  cout<<b.get_pro()<<endl;// cout<<b.pro<<endl;
  // cout<<b.pri<<endl;
  cout<<d.pub<<endl;
  cout<<d.dpro<<endl;
  // cout<<d1.pub<<endl;
  cout<<d1.d1pub<<endl;
  cout<<d1.d1pro<<endl;

  cout<<d2.d2pub<<endl;
  cout<<d2.d2pro<<endl;
  return 0;
}
