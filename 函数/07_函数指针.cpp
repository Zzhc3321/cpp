#include <iostream>
using namespace std;

// �ص�����/���Ӻ���
int func(int a,void (*funcp)()){
  (*funcp)();
  cout<<a<<endl;
  return a;
}

void funA(){
  cout<<"i am A"<<endl;
}

void funB(){
  cout<<"i am B"<<endl;
}

int main(){
  func(1,funA);
  func(2,funB);
  return 0;
}
