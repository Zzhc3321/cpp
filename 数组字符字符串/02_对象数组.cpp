// 类名 数组名[常量表达式]


class Point{
public:
  Point();
  Point(int x,int y);
  ~Point();
  void move(int newX,int newY);
  int getX() const {return x;}
  int getY() const {return y;}
  static void showCount();
private:
  int x,y;
};

#include <iostream>
using namespace std;

Point::Point(){
  x=y=0;
  cout<<"Default Constuctor called."<<endl;
}

Point::Point(int x,int y):x(x),y(y){
  cout<<"Constuctor called."<<endl;
}

Point::~Point(){
  cout<<"Destructor called."<<endl;
}

void Point::move(int newX,int newY){
  cout<<"Moving the point to ("<<newX<<","<<newY<<")"<<endl;
  x=newX;
  y=newY;
}

int main(){
  cout<<"Entering main..."<<endl;
  Point a[2];
  for(int i=0;i<2;i++)
    a[i].move(i+10,i+20);
  cout<<"Exiting main..."<<endl;
  return 0;
}
