#include <iostream>
using namespace std;
// 形参改变实参也变

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
