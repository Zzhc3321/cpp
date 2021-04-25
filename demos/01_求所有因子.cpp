#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  int i,x;
  cout<<"input an int num:"<<endl;
  cin>>x;
  cout<<"The factors of number "<<x<<" are:"<<endl;

  for(i=1;i<=x;i++){
    if(x%i==0)
      cout<<setw(5)<<i<<endl;
  }
  return 0;
}
