#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
  double values[]={1.23,35.36,635.7};
  for(int i=0;i<3;i++){
    cout.width(10);
    cout.fill('*');
    cout<<values[i]<<endl;
  }
  cout.put('1');
  return 0;
}
