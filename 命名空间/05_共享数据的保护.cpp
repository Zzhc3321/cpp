#include <iostream>
using namespace std;

// ���������ݳ�Աֵ�ڶ�������������ڼ䲻�ܸı䡣
// �����������г�ʼ�����Ҳ��ܱ����¡�

/*
������ const ����˵���� ������;
����Ա������ ����˵���� �������������� const;
�����ݳ�Ա�� const ����˵���� ������.
*/

class A{
public:
  A(int i);
  void print();
private:
  const int a;
  static const int b;
};

const int A::b = 10; //��̬�����ݳ�Ա������˵���ͳ�ʼ��

A::A(int i):a(i){}//�����ݳ�Աֻ��ͨ����ʼ���б�����ó�ֵ

void A::print(){
  cout<<a<<":"<<b<<endl;
}

// �����������õĶ����ܱ����¡�
// const ����˵���� &������

int main(){
  A a1(100),a2(0);
  a1.print();
  a2.print();

  return 0;
}
