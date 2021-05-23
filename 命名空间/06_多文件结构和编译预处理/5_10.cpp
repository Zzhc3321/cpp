#include "Point.cpp"// ÊéÉÏ´íÎó
#include <iostream>
using namespace std;


int main(){
  Point a(4,5);
  cout<<"Point A:"<<a.getX()<<","<<a.getY();
  Point::showCount();
  return 0;
}
