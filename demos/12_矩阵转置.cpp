#include <iostream>
using namespace std;

void move(int *matrix,int n){
  int i,j,k;
  for(i=0;i<n;j++)
    for(j=0;j<i;j++){
      k = *(matrix+i*n+j);
      *(matrix +i*n +j) = *(matrix+j*n+i);
      *(matrix +j*n +i) = k;
    }
}

int main(){

  return 0;
}
