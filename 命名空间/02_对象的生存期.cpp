#include <iostream>
using namespace std;

/*
�������������������������ͬ�����Ϊ��̬�����ڡ�
���Ҫ�ں����ڲ��ľֲ����������������о�̬�����ڵĶ�������Ҫ�ùؼ���static
*/

/*
��̬�����ڵ����������㣬�������������ڵĿ�ִ�����֮ʱ��
*/

int i=1; //���о�̬������

void other(){
  static int a=2;
  static int b;
  int c=10;
  a+=2;
  i+=32;
  c+=5;
  cout<<"__OTHER__"<<endl;
  cout<<"i:"<<i<<"a:"<<a<<"b:"<<b<<"c:"<<c<<endl;
  b = a;
}

int main(){
  // ��������ÿ�εĺ������ö�����һ��������Ҳ�������ź����ķ��ض�ʧЧ��
  static int a;
  int b=-10;
  int c=0;

  cout<<"__MAIN__"<<endl;
  cout<<"i:"<<i<<"a:"<<a<<"b:"<<b<<"c:"<<c<<endl;
  i+=10;
  other();
    other();
  return 0;
}
