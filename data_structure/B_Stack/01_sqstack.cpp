#include <iostream>
using namespace std;

const int Max_size = 50;

typedef int Elemtype;

struct sqstack{
  Elemtype data[Max_size];
  int top;
}stack;

bool Init_sq_stack(sqstack &S){
  S.top=-1;
  return true;
}

bool push(sqstack &S,Elemtype e){
  if(S.top==Max_size-1)
    return false;
  S.data[++S.top] = e;
  return true;
}

bool pop(sqstack &S,Elemtype &e){
  if(S.top==-1)
    return false;
  e = S.data[S.top--];
  return true;
}

bool ShowElem(sqstack &S){
  int po = S.top;
  cout<<"show Elems: ";
  while(po+1){
    cout<<S.data[po--]<<' ';
  }
  cout<<endl;
  return true;
}

int main(){
  sqstack S;
  Init_sq_stack(S);
  push(S,1);
  push(S,2);
  ShowElem(S);
  Elemtype e;
  pop(S,e);
  cout<<e<<endl;
    ShowElem(S);
  return 0;
}
