#include <iostream>
using namespace std;
const double PI = 3.14159265358979;

/*
�����ڴ������ã���߿���Ч�ʣ���ǿ����Ŀɿ��ԣ����ڷֹ������������޸�ά����

�ή�ͳ����ִ��Ч�ʣ�����ʱ��Ϳռ䷽��Ŀ�����

������һЩ���ܼ򵥣���ģС��ʹ��Ƶ���ĺ�����

�������������ڵ���ʱ��������ת�ƣ������ڱ���ʱ��������Ƕ����ÿһ�����ô���
��ʡ�˲������ݡ�����ת�Ƶȿ�����
*/

inline double calArea(double radius){
  return PI*radius*radius;
}

int main(){
  double r = 3.0;
  cout<<calArea(r)<<endl;

  return 0;
}
