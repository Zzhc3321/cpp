#include <iostream>
using namespace std;

class Shape{//»ùÀà
public:
  Shape(){}
  ~Shape(){}
  virtual float getarea(){return -1;}
};

class Circle:public Shape{
public:
  Circle(float radius):itsRadius(radius){}
  ~Circle(){}
  float getarea(){return 3.14*itsRadius*itsRadius;}
private:
  float itsRadius;
};

class Rectangle:public Shape{
public:
  Rectangle(float len,float width):itsLen(len),itsWidth(width){}
  ~Rectangle(){}
virtual float getarea(){return itsLen*itsWidth;}
private:
  float itsLen;
  float itsWidth;
};

class Square:public Rectangle{
public:
  Square(float len);
  ~Square(){}
};

Square::Square(float len):Rectangle(len,len){}

int main(){
  Shape *sp;
  sp = new Circle(5);
  cout<<sp->getarea()<<endl;
  delete sp;
  sp = new Square(5);
  cout<<sp->getarea()<<endl;
  return 0;
}
