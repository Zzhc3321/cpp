#include <iostream>
using namespace std;
int main(){
  int a=1,b=2,c=3;
  cout<<"a,b,c="<<a<<","<<b<<","<<c<<endl;

  //��Ŀ����
  cout<<"��Ŀ����(a>b?a:b):        "<<(a>b?a:b)<<endl;

  cout<<"a|b:    "<<(a|b)<<endl;//1=0001;2=0010;1|2=0011;����1��1��
  cout<<"a&c:    "<<(a&c)<<endl;//2����Ϊ1->1;
  cout<<"a^b:    "<<(a^b)<<endl;//��ͬΪ0��ͬΪ1;
  cout<<"b<<a:    "<<(b<<a)<<endl;//����1;
  cout<<"~c:    "<<~c<<endl;//3,0000 0011 ȡ��->1111 1100 ����1111 1011 ���ԭ��1000 0100->-4(ת���ɵ��ǲ���)
  cout<<"!0:    "<<~0<<endl;//��0Ϊ0��0��1��

  return 0;
}
