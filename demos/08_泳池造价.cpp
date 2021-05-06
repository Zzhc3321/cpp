#include <iostream>
using namespace std;

// ��Ӿ�ظ���Ԥ��,circle��
/*
  Բ�ι���
դ���ļ۸�35Ԫ/�ף�
����20Ԫ/ƽ���ף�
�������3�ף�
���㲢���������դ������ۡ�
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
