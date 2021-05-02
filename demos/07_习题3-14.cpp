// n阶勒让德多项式的值，在主程序中实现输入输出。
#include <iostream>
using namespace std;

int func(int x,int n){
  if(n==0)
    return 1;
  else if(n==1)
    return x;
  else
    return ((2*n-1)*x*func(x,n-1)-(n-1)*func(x,n-2))/n;
}

int main(){
  int x,n;
  cout<<"Please enter x and n : "<<endl;
  cin>>x>>n;
  cout<<"The result is "<<func(x,n)<<endl;
  return 0;
}
