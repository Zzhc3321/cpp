#include <iostream>
using namespace std;

int main(){
  int a[10],b[10][3];
  int i=0;

  for(i=0;i<10;i++){
    int j=0;
    if(j==0)
      a[i] = i*2+1;
    for(j=0;j<3;j++)
          b[i][j]=2*j+1;
  }

  for(int i=0;i<10;i++){
      int j=0;
    if(j==0)
      cout<<"a["<<i<<"]:"<<a[i]<<endl;
    for(j=0;j<3;j++)
          cout<<"b["<<i<<"]"<<"["<<j<<"]:"<<b[i][j]<<endl;
  }
}
