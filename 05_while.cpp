#include <iostream>
using namespace std;
int main(){
  int x,sum;
  cout<<"x:"<<endl;
  cin>>x;
  sum = 1;

  while(x--){
    sum*=(x+1);
    cout<<"x:"<<x<<endl;
  }
  cout<<"sum"<<sum<<endl;
  return 0;
}
