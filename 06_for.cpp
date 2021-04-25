#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  int x,i;
  cout<<setw(10)<<"input x:"<<endl;
  cin>>x;
  for(i=0;i<x;i++){
    cout<<setw(2)<<i<<endl;
  }
}
