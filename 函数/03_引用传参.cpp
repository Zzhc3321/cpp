#include <iostream>
using namespace std;
// �βθı�ʵ��Ҳ��

void swap(int &a,int&b){
  int c;
  c = a;
  a = b;
  b = c;
}

int main(){
  int a,b;
  cout<<"Please input two int nums: "<<endl;
  cin>>a>>b;
  cout<<"a is : "<<a<<" and b is : "<<b<<endl;
  swap(a,b);
  cout<<"after swaped"<<"\n"<<"a is : "<<a<<" and b is : "<<b<<endl;
  return 0;
}
