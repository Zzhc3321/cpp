#include <iostream>
using namespace std;

double fac(int n){
  if(n<=1)
    return 1;
  else
    return n*fac(n-1);
}

int main(){
  int x;
  cout<<"please input an int num:"<<endl;
  cin>>x;
  cout<<fac(x)<<endl;
  return 0;
}
