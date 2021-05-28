#include <iostream>
using namespace std;

class Point{
public:
  Point():x(0),y(0){cout<<"Default constructor called."<<endl;}
  Point(int x,int y):x(x),y(y){
    cout<<"Constructor called."<<endl;
  }

  ~Point(){cout<<"Destructor called."<<endl;}
  int getX() const {return x;}
  int getY() const {return y;}
  void move(int newx,int newy){
    x=newx;
    y=newy;
  }
private:
  int x,y;
};

int main(){
  cout<<"step one:"<<endl;
  Point *plt=new Point;
  delete plt;

  cout<<"step two:"<<endl;
  plt = new Point(1,2);
  delete plt;

  Point *ptr = new Point[2];
  ptr[0].move(5,10);
  ptr[1].move(15,20);

  cout<<"Deleting..."<<endl;
  delete []ptr;

  return 0;
}
