#include <iostream>
using namespace std;

// 指针变量是用于存放内存地址单元的
// 通过指针访问是间接的
int main(){
  int i;
  int *p=&i;
  i = 100;
  cout<<*p<<endl;

  // 可以更改指针所指的对象，但不能通过修改指针内容修改对象变量名
  // 可以可以常指针
  int const *c=&i;

  // void 指针一般用在指向数据类型不确定时使用
  void *vp;

  int a[5]={1,2,3,4,5};

  for(int k=0;k<5;k++)
      cout<<*(a+k)<<endl;
  for(int *ap=a;ap<a+5;*ap++)
    cout<<*ap<<endl;
  return 0;
}
