#include <iostream>
using namespace std;

class Point{
public:
  Point(int x,int y);
  // Point(Point &p);
  int getX(){return xx;}
  int getY(){return yy;}
private:
  int xx,yy;
};
Point::Point(int x,int y){
  xx = x;
  yy = y;
}
// Point::Point(Point &p){
//   xx = p.xx;
//   yy = p.yy;
// }

class Line{
public:
  Line(Point p1,Point p2);
  // Line(Line &l);
  int getLen(){return len;}
private:
  Point P1,P2;
  int len;
};
Line::Line(Point p1,Point p2):P1(p1),P2(p2){
  len = p1.getX()+p2.getX() + p1.getY()+p2.getY();
};

// Line::Line(Line &l){
//   P1 = l.P1;
//   P2 = l.P2;
//   len = l.len;
// }

Point func(int x,int y){
  return Point(x,y);
}

int main(){
  // Point p(2,2);
  // 临时对象的生存期很短，在它缩在的表达式被执行完后就会被销毁。
  cout<<Line(Point(2,2),Point(10,3)).getLen()<<endl;
  // 函数传/返对象
  cout<<func(1,2).getX()<<endl;
  return 0;

}
