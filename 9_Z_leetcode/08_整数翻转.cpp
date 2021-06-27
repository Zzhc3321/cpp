#include<iostream>
#include <string>
using namespace std;

int getlen(int a){
  int i=0;
  while(a){
        i++;
        a = a/10;
  }

  return i;
}

int getpower(int i){
  if(i==1){
    return 10;
  }
  return 10*getpower(i-1);
}

int main(){
  int a=10086;
  int e,res=0;
  while(a){
    e = a%10;
    a = a/10;
    if(res>214748364.7||res<-214748364.8)
          return 0;
    res = res*10+e;
  }
  cout<<res<<endl;
  cout<<2E+2<<endl;
  return 0;
}
