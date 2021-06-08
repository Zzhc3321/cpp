#include <iostream>
using namespace std;

typedef int Elemtype;

typedef struct LNode{
  Elemtype data;
  struct LNode *next;
}LNode,*Llist;

void Init_LinkList(Llist &L){
  L = new(LNode);
  L->next = NULL;
}

void Create_list_head(Llist &L){
  LNode *s;Elemtype e;
  cin>>e;
  while(e!=9999){
    s = new(LNode);
    s->data = e;
    s->next = L->next;
    L->next = s;
    cin>>e;
  }
}

void Create_list_tail(Llist &L){
  LNode *s,*r=L;
  Elemtype e;
  cin>>e;
  while(e!=9999){
    s = new(LNode);
    s->data = e;
    r->next = s;
    r = s;
    cin>>e;
  }
  r->next = NULL;
}

bool GetElem(Llist L,int i,LNode *res){
  LNode *p=L;
  while(p!=NULL){
    if(i--==0)
      break;
    p = p->next;
  }
  if(p==NULL)
    return false;
  else{
    res->data = p->data;
    res->next = p->next;
  }
  return true;
}

bool Delete_elem_by_position(Llist &L,int i){
  if(i<=0)
    return false;
  LNode *p = L;
  for(int j=0;j<i-1;j++){
    p = p->next;
    if(p==NULL)
      return false;
  }
  LNode *s = p->next;
  p->next = p->next->next;
  delete s;
  return true;
}

bool Delete_elem_by_Elem(Llist &L,Elemtype e){
  LNode *p=L;
  while(p->next!=NULL){
    LNode *s=p->next;
    if(s->data==e){
      p->next = s->next;
      delete s;
    }
    else
      p = p->next;
  }
  return true;
}

bool Insert_elem(Llist &L,Elemtype e,int i){
  LNode *p=L,*s;
  for(int j=1;j<i;j++){
    p = p->next;
    if(p==NULL)
      return false;
  }
  s = new(LNode);
  s->data = e;
  s->next = p->next;
  p -> next = s;
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
  // Llist L;
  // Create_list_head(L);
  // ShowElem(L);
  Llist L;
  Init_LinkList(L);
  Create_list_tail(L);
  ShowElem(L);

  LNode *node;
  node = new(LNode);
  bool tf = GetElem(L,5,node);
  if(tf)
    cout<<node->data<<endl;
  else
    cout<<"something wrong"<<endl;
  ShowElem(L);
  // Delete_elem_by_position(L,5);
  Delete_elem_by_Elem(L,6);
  ShowElem(L);

  Insert_elem(L,6,5);
  ShowElem(L);

  return 0;
}
