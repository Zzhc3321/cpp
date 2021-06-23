#include <iostream>
using namespace std;

typedef char Elemtype;

const int Max_size=20;

typedef struct{
  Elemtype* ch;
  int length;
}hstring;

int main(){
  hstring s;
  s.ch = new char[Max_size];
  s.length = 0;
  delete &s;
  return 0;
}
