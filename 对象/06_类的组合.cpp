#include <iostream>
#include <cmath>
using namespace std;
// 类的组合描述就是一个类内嵌其他类的对象作为成员的情况

// 当创建类对象时，内嵌对象将会优先自动创建

// 析构函数相反

// 线Line类包含点Point类

class Point{
public:
  Point(int xx=0,int yy=0) {
    x=xx;
    y=yy;
  }
  Point(Point &p);
  int getx(){return x;}
  int gety(){return y;}
private:
  int x,y;
};
// 复制构造函数
Point::Point(Point &p){
  x = p.x;
  y = p.y;
}

class Line{
public:
  Line(Point xp1,Point xp2);
  Line(Line &l);
  double getlen(){return len;}
private:
  Point p1,p2;
  double len;
};

// 组合类的构造函数
Line::Line(Point xp1,Point xp2){
  p1 = xp1;
  p2 = xp2;
  double x = static_cast<double>(p1.getx()-p2.getx());
  double y = static_cast<double>(p1.gety()-p2.gety());
  len = sqrt(x*x+y*y);
}
// 组合类的复制构造函数
// Line::Line(Line &l):p1(l.p1),p2(l.p2){
//   len = l.len;
// }

Line::Line(Line &l){
  p1 = l.p1;
  p2 = l.p2;
  len = l.len;
}


int main(){
  Point myp1(1,1),myp2(4,5);
  Line line(myp1,myp2);
  cout<<line.getlen()<<endl;
  return 0;
}
