#include <iostream>
using namespace std;

// 数据成员莺歌声明成类
class Clock{
  public:
    void setTime(int newH=0, int newM=0, int newS=0);
    void showTime();
  private:
    int hour,minute,second;
};//类定义后要加分号

// 类声明在类里
// 而实现是写在类定义外
void Clock::setTime(int newH, int newM, int newS){
  hour = newH;
  minute = newM;
  second = newS;
}

inline void Clock::showTime(){
  cout<<hour<<':'<<minute<<':'<<second<<endl;
}

int main(){
  Clock myClock;
  cout<<"First time set and output:"<<endl;
  myClock.setTime();
  myClock.showTime();
  cout<<"Second time set and output:"<<endl;
  myClock.setTime(20,41,30);
  myClock.showTime();

  return 0;
}
