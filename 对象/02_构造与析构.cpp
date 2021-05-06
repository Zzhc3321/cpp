#include <iostream>
using namespace std;

/*
①构造函数名与类名相同
②构造函数没有返回值
③构造函数通常被声明为公有函数
④若没有定义构造函数，则编译器自动构造隐含的默认构造函数
*/

class Clock{
public:
  Clock(int h,int m,int s);
  void settime(int h,int m,int s);
  void showtime();
private:
  int hour,minute,second;
};

// 构造函数
Clock::Clock(int h,int m,int s){
  hour = h;
  minute = m;
  second = s;
}

void Clock::settime(int h,int m,int s){
  hour = h;
  minute = m;
  second = s;
}

inline void Clock::showtime(){
  cout<<hour<<':'<<minute<<':'<<second<<endl;
}

int main(){
  Clock c(0,0,0);
  c.showtime();
  c.settime(8,30,30);
  c.showtime();
  return 0;
}
