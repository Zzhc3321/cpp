#include<iostream>
using namespace std;

double power(double x,int n){
  double val=1.0;
  while(n--){
    val*=x;
  }
  return val;
}

int main(){
  int x;
  cout<<"please input an int num:"<<endl;
  cin>>x;
  cout<<x<<" to the power 2 is "<<power(x,2)<<endl;
  return 0;
}
