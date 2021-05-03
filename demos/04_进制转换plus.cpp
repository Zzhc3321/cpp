#include <iostream>
using namespace std;
// ����η�
double power(double x,int n){
  double val=1.0;
  int k;
  if(n>=0){
    while(n--){
      val*=x;
    }
  }
  else{
    k=-n;
    while(k--){
      val*=x;
    }
    val = 1/val;
  }
  return val;
}

//������ת����ʮ����
int b_to_d(int x){
  int y=x,z,sum=0,i=0;
  while(y){
    z = y%10;
    y = y/10;
    sum += z*power(2,i++);
  }
  return sum;
}
// ���غ�������С������
double b_to_d(double x){
  int y=int(x),z,i=0,k,j=-1;
  int l=10;// l ����С��λ������
  double yx=x-y,sum=0;
  while(y&&(l--)){
    z = y%10;
    y = y/10;
    k = int(yx*10);
    yx = yx*10 - int(yx*10);
    sum += z*power(2,i++);
    sum += k*power(2,j--);
  }
  return sum;
}

//ʮ����ת���ɶ�����
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
// ���غ�������С������
double d_to_b(double x){
  int y=int(x),z,i=0,k,j=-1;
  int l=5; // ���ƾ���
  double yx=x-y,sum=0;
  int a[999]={0};
  while(y){
    a[i++] = y%2;
    y = y/2;
  }
  // cout<<"this 2 bit binary has the length of "<<i<<endl;
  while(i)
    sum += a[--i]*power(10,i);
  while(l--){
    sum += int(yx*2)*power(10,j--);
    yx = (yx*2)-int(yx*2);
  }
  return sum;
}


int main(){
  int x,y;
  cout<<"please input an binary:"<<endl;
  cin>>x;
  cout<<"The result of binary to decimal is "<<b_to_d(x)<<endl;

  double x1,y1;
  cout<<"please input an double binary:"<<endl;
  cin>>x1;
  cout<<"The result of binary to decimal is "<<b_to_d(x1)<<endl;

  cout<<"please input an decimal:"<<endl;
  cin>>y;
  y = d_to_b(y);
  cout<<"The result of decimal to binary is "<<y<<endl;

  cout<<"please input an double decimal:"<<endl;
  cin>>y1;
  y1 = d_to_b(y1);
  cout<<"The result of decimal to binary is "<<y1<<endl;
}
