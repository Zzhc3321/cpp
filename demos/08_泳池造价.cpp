#include <iostream>
using namespace std;

// 游泳池改造预算,circle类
/*
  圆形过道
栅栏的价格35元/米；
过道20元/平方米；
过道宽度3米；
计算并输出过道和栅栏的造价。
*/

const float PI=3.141593;
const float FENCE_PRICE=35;
const float CONCERTE_PRICE=20;

class Circle{
public:
  Circle(float r);
  float circumference();
  float area();
private:
  float radius;
};

Circle::Circle(float r){
  radius = r;
}

float Circle::circumference(){
  return 35*2*PI*radius;
}

float Circle::area(){
  return 25*(PI*(radius+3)*(radius+3) - PI*radius*radius);
}

int main(){
  int r;
  cout<<"enter an radius num :"<<endl;
  cin>>r;
  Circle circle(r);
  cout<<"FENCE_PRICE:"<<circle.circumference()<<endl;
  cout<<"AREA_PRICE:"<<circle.area()<<endl;
  return 0;
}
