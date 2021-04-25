#include <iostream>
using namespace std;
typedef int mydef1;
typedef double mydef2;
enum myenum1 {a=7,b=1,c=5,d,e,f,o};//d=6,e=7...
enum myenum2 {v,y,z};//0,1,2
int main(){
  mydef1 x;
  mydef2 y;
  myenum1 m=a;
  myenum2 k=v;
  bool res;
  cin>>y;
  cout<<"y:"<<y<<endl;
  cout<<"m:"<<m<<" "<<"k:"<<k<<endl;
  res = k==v;
  cout<<"ÅÐ¶Ïk==v:"<<res<<endl;
  return 0;
}
