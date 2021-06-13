#include <iostream>
using namespace std;

typedef int Elemtype;

typedef struct LNode{
  Elemtype data;
  struct LNode *next;
}LNode,*Llist;

bool Init_circle_link_list(Llist &L){
  L = new(LNode);
  L->next = L;
  return true;
}

bool Create_Linklist(Llist &L){
  LNode *s,*r=L;
  Elemtype e;
  cin>>e;
  while(e!=999){
    s = new(LNode);
    s->data = e;
    r->next = s;
    r = s;
    cin>>e;
  }
  r->next = L;
  return true;
}

bool Insert_elem(Llist &L,LNode *node,int po){
  LNode *p=L;
  while(--po){
    p = p->next;
  }
  node->next = p->next;
  p->next = node;
  return true;
}

bool Delete_elem_by_Elem(Llist &L,Elemtype e){
  LNode *p=L;
  while(p->next != L){
    if(p->next->data==e){
      LNode *f=p->next;
      p->next = p->next->next;
      delete f;
    }
    else
      p = p->next;
  }
  return true;
}

bool Delete_elem_by_Position(Llist &L,int pos){
  if(pos<=0)
  return false;
  LNode *p=L;
  while(--pos){
    p = p->next;
  }
  LNode *de=p->next;
  p->next = p->next->next;
  delete de;
  return true;
}

bool ShowElem(Llist L,int num){
  LNode *p=L;
  while(num--){
    if(p==L)
      p = p->next;
    cout<<p->data<<' ';
    p = p->next;
  }
  cout<<endl;
  return true;
}

int main(){
  Llist L;
  Init_circle_link_list(L);
  Create_Linklist(L);
  ShowElem(L,50);
  LNode *e;
  e = new(LNode);
  e->data = 6;
  Insert_elem(L,e,e->data);
  ShowElem(L,50);
  Delete_elem_by_Elem(L,e->data);
  ShowElem(L,50);
  Delete_elem_by_Position(L,5);
  ShowElem(L,50);
  return 0;
}
