#include <iostream>
using namespace std;

typedef int Elemtype;

typedef struct LNode{
  struct LNode *prior;
  Elemtype data;
  struct LNode *next;
}LNode,*Llist;

bool Init_Two_way_Link_list(Llist &L){
  L = new(LNode);
  L->prior = NULL;
  L->next = NULL;
  return true;
}

void ShowElem(Llist L){
  LNode *p = L->next;
  while(p!=NULL){
    cout<<p->data<<' ';
    p = p->next;
  }
  cout<<endl;
}

int main(){
  Llist L;
  Init_Two_way_Link_list(L);
  // LNode *e;
  LNode *e;
  e = new(LNode);
  e -> data = 1;
  L->next = e;
  e->prior = L;

  ShowElem(L);

  return 0;
}
