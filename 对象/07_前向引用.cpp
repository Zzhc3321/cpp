#include <iostream>
#include <cmath>
using namespace std;

// 类A与类B互相包含，那么必须要前向引用
class B;//前向引用

class A{
public:
  void f1(B b);
};
class B{
public:
  void f2(A a);
}

int main(){
  Point myp1(1,1),myp2(4,5);
  Line line(myp1,myp2);
  cout<<line.getlen()<<endl;
  return 0;
}
