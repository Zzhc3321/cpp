#include <iostream>
#include <cmath>
using namespace std;

// ��Ԫ��ϵ�ṩ�˲�ͬ������ĳ�Ա����֮�䡢��ĳ�Ա������һ�㺯��֮��������ݹ���Ļ��ơ�

// ��Ԫ����ʱ�������ùؼ���friend���εķǳ�Ա����
// �����ĺ������п���ͨ���������������˽�кͱ�����Ա

// ��A��ΪB�����Ԫ��,��A������г�Ա��������B�����Ԫ����,�����Է���B���˽�кͱ�����Ա

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
