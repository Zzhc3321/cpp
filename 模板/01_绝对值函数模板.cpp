#include <iostream>
using namespace std;

template <typename T>

T abs(T t){
  return t>0?t:-t;
}

int main(){
  int x=-10;
  float y=-11.1;
  cout<<abs(x)<<endl;
  cout<<abs(y)<<endl;
  return 0;
}
