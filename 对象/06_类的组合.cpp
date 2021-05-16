#include <iostream>
#include <cmath>
using namespace std;
// ��������������һ������Ƕ������Ķ�����Ϊ��Ա�����

// �����������ʱ����Ƕ���󽫻������Զ�����

// ���������෴

// ��Line�������Point��

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
// ���ƹ��캯��
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

// �����Ĺ��캯��
Line::Line(Point xp1,Point xp2){
  p1 = xp1;
  p2 = xp2;
  double x = static_cast<double>(p1.getx()-p2.getx());
  double y = static_cast<double>(p1.gety()-p2.gety());
  len = sqrt(x*x+y*y);
}
// �����ĸ��ƹ��캯��
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
