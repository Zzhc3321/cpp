#include <iostream>
using namespace std;

class Clock{
public:
  Clock();//构造函数
  void set();
  void show();
  ~Clock(){}//析构函数
private:
  int time;
};

int main(){

  return 0;
}
