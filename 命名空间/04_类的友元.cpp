#include <iostream>
#include <cmath>
using namespace std;

// 友元关系提供了不同类或对象的成员函数之间、类的成员函数与一般函数之间进行数据共享的机制。

// 友元函数时在类中用关键字friend修饰的非成员函数
// 在它的函数体中可以通过对象名访问类的私有和保护成员

// 若A类为B类的友元类,则A类的所有成员函数都是B类的友元函数,都可以访问B类的私有和保护成员

class Point{
public:
  Point(int x=0,int y=0):x(x),y(y){}
  int getX(){return x;}
  int getY(){return y;}
  friend float dist(Point &p1,Point &p2);
  // friend class b;
private:
  int x,y;
};

float dist(Point &p1,Point &p2){
  double x = p1.x-p2.x;
  double y = p1.y-p2.y;
  return static_cast<float>(sqrt(x*x+y*y));
}

int main(){
  Point mp1(1,1),mp2(1,2),mp3(4,5);
  cout<<dist(mp1,mp2)<<endl;
  cout<<dist(mp1,mp3)<<endl;
  return 0;
}
