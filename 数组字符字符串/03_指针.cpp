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

  int a[5]={1,2,3,4,5};

  for(int k=0;k<5;k++)
      cout<<*(a+k)<<endl;
  for(int *ap=a;ap<a+5;*ap++)
    cout<<*ap<<endl;
  return 0;
}
