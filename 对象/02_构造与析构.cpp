#include <iostream>
using namespace std;

/*
�ٹ��캯������������ͬ
�ڹ��캯��û�з���ֵ
�۹��캯��ͨ��������Ϊ���к���
����û�ж��幹�캯������������Զ�����������Ĭ�Ϲ��캯��
*/

class Clock{
public:
  Clock(int h,int m,int s);
  void settime(int h,int m,int s);
  void showtime();
private:
  int hour,minute,second;
};

// ���캯��
Clock::Clock(int h,int m,int s){
  hour = h;
  minute = m;
  second = s;
}

void Clock::settime(int h,int m,int s){
  hour = h;
  minute = m;
  second = s;
}

inline void Clock::showtime(){
  cout<<hour<<':'<<minute<<':'<<second<<endl;
}

int main(){
  Clock c(0,0,0);
  c.showtime();
  c.settime(8,30,30);
  c.showtime();
  return 0;
}
