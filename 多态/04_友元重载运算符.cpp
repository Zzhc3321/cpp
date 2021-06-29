#include <iostream>
using namespace std;

class Point{
public:
  Point() { X = Y = 0; }
  Point( unsigned x, unsigned y ) { X = x; Y = y; }
  unsigned x() { return X; }
  unsigned y() { return Y; }
  void Print() { cout << "Point(" << X << ", " << Y << ")" << endl; }
  friend Point operator+( Point& pt, int nOffset );
  friend Point operator+( int nOffset, Point& pt );
private:
  unsigned X;
  unsigned Y;
};

Point operator+( Point& pt, int nOffset ){
  Point ptTemp = pt;
  ptTemp.X += nOffset;
  ptTemp.Y += nOffset;
  return ptTemp;
}

Point operator+( int nOffset, Point& pt ){
  Point ptTemp = pt;
  ptTemp.X += nOffset;
  ptTemp.Y += nOffset;
  return ptTemp;
}

int main(){
  Point pt( 10, 10 );
  pt.Print();

  pt = pt + 5; // Point + int
  pt.Print();

  pt = 10 + pt; // int + Point
  pt.Print();
  return 0;
}
