#include <iostream>
using namespace std;

typedef int Elemtype;

typedef struct LNode{
  Elemtype data;
  struct LNode *prior;
  struct  LNode *next;
}LNode,*Llist;

void Init_two_way_circle_link_list(Llist &L){
  L = new(LNode);
  L->prior = L;
  L->next = L;
}

bool Create_Linklist(Llist &L){
    LNode *p=L,*s;
    Elemtype e;
    cin>>e;
    while(e!=999){
      s = new(LNode);
      s->data = e;
      s->next = p->next;
      s->prior = p;
      p->next->prior = s;
      p->next = s;
      p = s;
      cin>>e;
    }
    return true;
}

bool Insert_elem(Llist &L,Elemtype e,int i){
  LNode *s,*p=L;
  while(--i){
    p = p->next;
  }
  s = new(LNode);
  s->data = e;
  s->next = p->next;
  s->prior = p;
  p->next->prior = s;
  p->next = s;

  return true;
}

bool ShowElem_by_next(Llist L){
  LNode *p=L->next;
  while(p!=L){
    cout<<p->data<<' ';
    p = p->next;
  }
  cout<<endl;
  return true;
}

bool ShowElem_by_prior(Llist L){
  LNode *p=L->prior;
  while(p!=L){
    cout<<p->data<<' ';
    p = p->prior;
  }
  cout<<endl;
  return true;
}

int main(){
  Llist L;
  Init_two_way_circle_link_list(L);
  // Create_Linklist(L);
  Insert_elem(L,3,1);
    Insert_elem(L,2,1);
      Insert_elem(L,1,1);
  ShowElem_by_next(L);
  ShowElem_by_prior(L);
  return 0;
}
