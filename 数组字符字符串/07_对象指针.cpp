#include <iostream>
using namespace std;

class Point{
public:
  Point(int x=0,int y=0):x(x),y(y){}
  int getX() const {return this->x;}
  int getY() const {return y;}
private:
  int x,y;
};

// ָ�����ָ��̬���ݳ�Ա�;�̬���Ա

int main(){
  Point a(4,5);
  Point *pl=&a;
  cout<<pl->getX()<<endl;
    cout<<a.getX()<<endl;
  return 0;
}
