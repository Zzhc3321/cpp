#include <iostream>
using namespace std;

class Clock{
  public:
    Clock(int h,int m,int s);
    Clock(){
      hour = 0;
      minute = 0;
      second = 0;
    }
    void setTime(int newH=0, int newM=0, int newS=0);
    void showTime();
  private:
    int hour,minute,second;
};

Clock::Clock(int h,int m,int s){
  hour = h;
  minute = m;
  second = s;
}

void Clock::setTime(int newH, int newM, int newS){
  hour = newH;
  minute = newM;
  second = newS;
}

inline void Clock::showTime(){
  cout<<hour<<':'<<minute<<':'<<second<<endl;
}

int main(){
  Clock c1(1,2,3);
  Clock c2;
  c1.showTime();
  c2.showTime();

  return 0;
}
