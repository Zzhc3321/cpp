#include <iostream>
using namespace std;

/*
两个及以上的函数，具有相同的函数名，但是形参的个数或类型不同，编译器根据实参和形参的类型及个数最佳匹配。
*不以形参名字分别*
*不以返回值分别*
*/
/*
不可二义性
func(int a,int b=1,int c=2)
func(int a)

func(1) （×）

*/

int sum(int a,int b){
  return a*a+b*b;
}
double sum(double a,double b){
  return a*a+b*b;
}

int main(){
  int m,n;
  cout<<"Enter two integer : "<<endl;
  cin>>m>>n;
  cout<<"Their sum of square : "<<sum(m,n)<<endl;

  double x,y;
  cout<<"Enter two real num : "<<endl;
  cin>>x>>y;
  cout<<"Their sum of square : "<<sum(x,y)<<endl;
}
