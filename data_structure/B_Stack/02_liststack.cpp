#include<iostream>
using namespace std;

// 带头结点

typedef int Elemtype;

typedef struct LNode{
  Elemtype data;
  struct LNode *next;
}*Listack;

bool Init_li_stack(Listack &LS){
  LS = new LNode;
  LS->next = NULL;
  return true;
}

bool Is_empty(Listack LS){
  if(LS->next == NULL)
    return true;
  return false;
}

bool push(Listack &LS,Elemtype e){
  LNode* s;
  s = new LNode;
  s->data = e;
  s->next = LS->next;
  LS->next = s;
  return true;
}

bool pop(Listack &LS,Elemtype &e){
  if(Is_empty(LS))
    return false;
  LNode* p=LS->next;
  e = p->data;
  LS->next = p->next;
  delete p;
  return true;
}

int main(){
  Listack LS;
  Init_li_stack(LS);
  push(LS,1);
    push(LS,2);
      push(LS,3);
  Elemtype E;
  pop(LS,E);
  cout<<E<<endl;
  pop(LS,E);
  cout<<E<<endl;
  pop(LS,E);
  cout<<E<<endl;
  pop(LS,E);
  cout<<E<<endl;
  return 0;
}
