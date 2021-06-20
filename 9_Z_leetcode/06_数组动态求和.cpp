#include <iostream>
using namespace std;

void solvation(int* a,int* s,int n){
  for(int i=1;i<n;i++)
    s[i] = s[i-1]+a[i];
}

int main(){
  int a[4]={1,2,3,4};
  int s[4]={a[0]};
  solvation(a,s,4);
  for(int i=0;i<4;i++){
    cout<<s[i]<<' ';
  }
  return 0;
}
