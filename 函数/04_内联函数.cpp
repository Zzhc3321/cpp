#include <iostream>
using namespace std;
const double PI = 3.14159265358979;

/*
有利于代码重用，提高开发效率，增强程序的可靠性，便于分工合作，便于修改维护；

会降低程序的执行效率，增加时间和空间方面的开销；

适用于一些功能简单，规模小而使用频繁的函数。

内联函数不是在调用时发生控制转移，而是在编译时将函数体嵌入在每一个调用处。
节省了参数传递、控制转移等开销。
*/

inline double calArea(double radius){
  return PI*radius*radius;
}

int main(){
  double r = 3.0;
  cout<<calArea(r)<<endl;

  return 0;
}
