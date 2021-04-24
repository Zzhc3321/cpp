#include <iostream>
using namespace std;
int main(){
  int x,sum,y;
  char t;
  cout<<"x:"<<endl;
  cin>>x;
  y=x;
  sum = 1;
  cout<<"while"<<endl;
  while(x--){
    sum*=(x+1);
    cout<<"x:"<<x<<endl;
  }
  cout<<"sum"<<sum<<endl;
  sum = 1;
  cout<<"do_while"<<endl;
  y--;//加上和上面一样
  do{
    sum*=(y+1);
    cout<<"y:"<<y<<endl;
  }while(y--);
  cout<<"sum"<<sum<<endl;
  return 0;
}
