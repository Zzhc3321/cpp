#include <iostream>
using namespace std;

// 常对象：数据成员值在对象的整个生存期间不能改变。
// 常对象必须进行初始化，且不能被更新。

/*
常对象： const 类型说明符 对象名;
常成员函数： 类型说明符 函数名（参数表） const;
常数据成员： const 类型说明符 数据名.
*/

class A{
public:
  A(int i);
  void print();
private:
  const int a;
  static const int b;
};

const int A::b = 10; //静态常数据成员在类外说明和初始化

A::A(int i):a(i){}//常数据成员只能通过初始化列表来获得初值

void A::print(){
  cout<<a<<":"<<b<<endl;
}

// 常引用所引用的对象不能被更新。
// const 类型说明符 &引用名

int main(){
  A a1(100),a2(0);
  a1.print();
  a2.print();

  return 0;
}
