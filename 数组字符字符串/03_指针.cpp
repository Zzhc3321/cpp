#include <iostream>
using namespace std;

// ָ����������ڴ���ڴ��ַ��Ԫ��
// ͨ��ָ������Ǽ�ӵ�
int main(){
  int i;
  int *p=&i;
  i = 100;
  cout<<*p<<endl;

  // ���Ը���ָ����ָ�Ķ��󣬵�����ͨ���޸�ָ�������޸Ķ��������
  // ���Կ��Գ�ָ��
  int const *c=&i;

  // void ָ��һ������ָ���������Ͳ�ȷ��ʱʹ��
  void *vp;

  return 0;
}
