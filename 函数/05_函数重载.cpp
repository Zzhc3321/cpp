#include <iostream>
using namespace std;

/*
���������ϵĺ�����������ͬ�ĺ������������βεĸ��������Ͳ�ͬ������������ʵ�κ��βε����ͼ��������ƥ�䡣
*�����β����ֱַ�*
*���Է���ֵ�ֱ�*
*/
/*
���ɶ�����
func(int a,int b=1,int c=2)
func(int a)

func(1) ������

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
