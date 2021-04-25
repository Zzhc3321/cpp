#include <iostream>
using namespace std;
int main(){
  int a=1,b=2,c=3;
  cout<<"a,b,c="<<a<<","<<b<<","<<c<<endl;
  
  //三目运算
  cout<<"三目运算(a>b?a:b):        "<<(a>b?a:b)<<endl;

  cout<<"a|b:    "<<(a|b)<<endl;//1=0001;2=0010;1|2=0011;（有1则1）
  cout<<"a&c:    "<<(a&c)<<endl;//相同为1不同为0;
  cout<<"a^b:    "<<(a^b)<<endl;//相同为0不同为1;
  cout<<"b<<a:    "<<(b<<a)<<endl;//相同为0不同为1;
  cout<<"~c:    "<<~c<<endl;//3,0000 0011 取反->1111 1100 反码1111 1011 结果原码1000 0100->-4(转化成的是补码)
  cout<<"!0:    "<<~0<<endl;//非0为0；0变1；

  return 0;
}
