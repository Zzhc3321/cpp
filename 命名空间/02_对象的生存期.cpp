#include <iostream>
using namespace std;

/*
对象的生存期与程序的运行期相同，则称为静态生存期。
如果要在函数内部的局部作用域中声明具有静态生存期的对象，则需要用关键字static
*/

/*
动态生存期诞生于声明点，结束于声明所在的块执行完毕之时。
*/

int i=1; //具有静态生存期

void other(){
  static int a=2;
  static int b;
  int c=10;
  a+=2;
  i+=32;
  c+=5;
  cout<<"__OTHER__"<<endl;
  cout<<"i:"<<i<<"a:"<<a<<"b:"<<b<<"c:"<<c<<endl;
  b = a;
}

int main(){
  // 不会随着每次的函数调用而产生一个副本，也不会随着函数的返回而失效。
  static int a;
  int b=-10;
  int c=0;

  cout<<"__MAIN__"<<endl;
  cout<<"i:"<<i<<"a:"<<a<<"b:"<<b<<"c:"<<c<<endl;
  i+=10;
  other();
    other();
  return 0;
}
