#include <iostream>
using namespace std;
int main(){
  int a=1,b=2,c=3;
  cout<<"a,b,c="<<a<<","<<b<<","<<c<<endl;
  unsigned d=1,e=2,f=3;
  //��Ŀ����
  cout<<"��Ŀ����(a>b?a:b):        "<<(a>b?a:b)<<endl;

  cout<<"a|b:    "<<(a|b)<<endl;//1=0001;2=0010;1|2=0011;����1��1��
  cout<<"a&c:    "<<(a&c)<<endl;//2����Ϊ1Ϊ1;
  cout<<"a^b:    "<<(a^b)<<endl;//��ͬΪ0��ͬΪ1;
  cout<<"b<<a:    "<<(b<<a)<<endl;//����1;
  cout<<"~c:    "<<~c<<endl;//3,0000 0011 ȡ��->1111 1100 ����1111 1011 ���ԭ��1000 0100->-4(ת���ɵ��ǲ���)
  cout<<"!0:    "<<~0<<endl;//��0Ϊ0��0��1��

  cout<<(a | b - c)<<endl; //�Ӽ����ȼ�����λ���� �����ڵ�Ŀ����
  cout<<(a ^ b & -c)<<endl; // 3&-3 0011 1011
    cout<<(d ^ e & -f)<<endl; // 3&-3 0011 1011
    cout<<(1&-1)<<endl;
// c++ �õĲ��룡����
  return 0;
}
