#include <iostream>
using namespace std;

// 当一个函数的返回值是指针类型时，这个函数就是指针型函数
// 使用指针型函数最主要的目的就是要在函数结束时把大量的数据从被调函数返回到主调函数中

int *test(int *test){
  return test;
}

void printstuff(float){
  cout<<"stuff's message..."<<endl;
}

void printstuff_mess(float mes){
  cout<<"stuff's message..."<<mes<<endl;
}

int main(){
  int *p;
  int a=10;
  *p = a;
  cout<<*test(p)<<endl;

  void (*func)(float);
  printstuff(3.14);

  func = printstuff;
  func(3.14);

  func = printstuff_mess;
  func(3.14);

  return 0;
}
