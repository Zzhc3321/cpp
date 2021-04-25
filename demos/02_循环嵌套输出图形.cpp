#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  int x,i,j,k;
  cin>>x;
  for(i=1;i<=x;i++){
    for(j=1;j<=x-i;j++){
      cout<<setw(j*5)<<"*";
      // for(k=0;k<=(x-j)*5;k++){
      //   cout<<"*";
      // }
      cout<<endl;
    }
    // cout<<setw(i)<<"*"<<endl;
  }
  return 0;
}
