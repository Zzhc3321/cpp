#include <iostream>
using namespace std;
// 计算次方
double power(double x,int n){
  double val=1.0;
  while(n--){
    val*=x;
  }
  return val;
}

//二进制转换成十进制
int b_to_d(int x){
  int y=x,z,sum=0,i=0;
  while(y){
    z = y%10;
    y = y/10;
    sum += z*power(2,i++);
  }
  return sum;
}

//十进制转换成二进制
int d_to_b(int x){
  int y=x,z,sum=0,i=0;
  int a[999]={0};
  while(y){
    a[i++] = y%2;
    y = y/2;
  }
  cout<<"this 2 bit binary has the length of "<<i<<endl;
  while(i)
    sum += a[--i]*power(10,i);
  return sum;
}
int main(){
  int x,y;
  cout<<"please input an binary:"<<endl;
  cin>>x;
  cout<<"The result of binary to decimal is "<<b_to_d(x)<<endl;

  cout<<"please input an decimal:"<<endl;
  cin>>y;
  y = d_to_b(y);
  cout<<"The result of decimal to binary is "<<y<<endl;
}
