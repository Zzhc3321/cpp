#include <iostream>
using namespace std;

// ��һ�������ķ���ֵ��ָ������ʱ�������������ָ���ͺ���
// ʹ��ָ���ͺ�������Ҫ��Ŀ�ľ���Ҫ�ں�������ʱ�Ѵ��������ݴӱ����������ص�����������

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
