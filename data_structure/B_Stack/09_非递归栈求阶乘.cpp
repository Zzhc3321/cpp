#include <iostream>
using namespace std;

typedef int Elemtype;

typedef struct Node{
  Elemtype data;
  Node* next;
}Node,*Lstack;

bool Init_stack(Lstack &S){
  S = new Node;
  S->next = NULL;
  return true;
}

bool Isempty(Lstack &S){
  if(S->next)
    return false;
  else return true;
}

bool push(Lstack &S,Elemtype e){
  Node* elm;
  elm = new Node;
  elm->data = e;
  elm->next = S->next;
  S->next = elm;
  return true;
}

bool pop(Lstack &S,Elemtype &e){
  if(Isempty(S))
    return false;
  Node* p=S->next;
  e = p->data;
  S->next = S->next->next;
  delete p;
  return true;
}

double calculate(Elemtype data){
  Lstack Ls;
  double res=1;
  if(!Init_stack(Ls))
    return 0;
  for(int i=1;i<data+1;i++){
    push(Ls,i);
  }
  Elemtype e;
  while(!Isempty(Ls)){
    pop(Ls,e);
    res*=e;
  }
  return res;
}

int main(){
  Elemtype edata;
  cin>>edata;
  cout<<calculate(edata)<<endl;
  return 0;
}
