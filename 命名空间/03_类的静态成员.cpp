#include<iostream>
using namespace std;

// 静态成员是解决同一个类的不同对象之间的数据和函数共享的问题。
// 静态数据成员具有静态生存期。
// 类名::标识符

class Point{
public:
  Point(int x=0,int y=0):x(x),y(y){count++;}
  Point(Point &p){x=p.x;y=p.y;count++;}
  ~Point(){count--;}
  int getX(){return x;}
  int getY(){return y;}
  static void showCount(){cout<<"Object count="<<count<<endl;}//静态成员函数
private:
  int x,y;
  static int count;
};

int Point::count = 0; //初始化


// 静态成员函数可以通过类名或对象名来调用
// 非静态成员函数智能通过对象名来调用

int main(){
  Point::showCount();
  Point a(4,5);
  cout<<"Point A:"<<a.getX()<<','<<a.getY()<<endl;
  a.showCount();
  Point b(a);
  cout<<"Point B:"<<b.getX()<<','<<b.getY()<<endl;
  b.showCount();
  return 0;
}
