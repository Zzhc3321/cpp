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

bool Create_Link_list(Llist &L){
  LNode *p=L,*s;
  Elemtype e;
  cin>>e;
  while(e!=999){
    s = new(LNode);
    s->data = e;
    s->next = p->next;
    s->prior = p;
    p->next = s;
    if(s->next)
        s->next->prior = s;
    p = s;
    cin>>e;
  }
  return true;
}

bool Delete_elem_by_position(Llist &L,int i){
  if(i<=0)
    return false;
  LNode *p = L;
  for(int j=0;j<i;j++){
    p = p->next;
    if(p==NULL)
      return false;
  }
  p->prior->next = p->next;
  p->next->prior = p->prior;
  delete p;
  return true;
}

void ShowElem_by_next(Llist L){
  LNode *p = L->next;
  while(p!=NULL){
    cout<<p->data<<' ';
    p = p->next;
  }
  cout<<endl;
}

void ShowElem_by_prior(Llist L){
  LNode *p = L;
  while(p->next!=NULL){
    p = p->next;
  }
  while(p->prior!=NULL){
    cout<<p->data<<' ';
    p = p->prior;
  }
  cout<<endl;
}

int main(){
  Llist L;
  Init_Two_way_Link_list(L);
  cout<<"please enter elms (end by 999):"<<endl;
  Create_Link_list(L);
  ShowElem_by_prior(L);
  Delete_elem_by_position(L,5);
  ShowElem_by_prior(L);

  return 0;
}
