#include <iostream>
using namespace std;

// 指针变量是用于存放内存地址单元的
// 通过指针访问是间接的
int main(){
  int i;
  int *p=&i;
  i = 100;
  cout<<*p<<endl;
}
