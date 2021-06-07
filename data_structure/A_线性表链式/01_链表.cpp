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

void ShowElem(Llist L){
  LNode *p=L;
  while(p!=NULL){
    p = p->next;
    cout<<p->data<<' ';
  }
  cout<<endl;
}

bool GetElem(Llist L,int i,LNode *res){
  LNode *p=L;
  while(p!=NULL){
    if(i--==0)
      break;
    p = p->next;
  }
  cout<<p->data<<endl;
  if(p==NULL)
    return false;
  else{
    res->data = p->data;
    res->next = p->next;
  }
  return true;
}

int main(){
  // Llist L;
  // Create_list_head(L);
  // ShowElem(L);
  Llist L;
  Init_LinkList(L);
  Create_list_tail(L);
  // ShowElem(L);

  LNode *node;
  node = new(LNode);
  bool tf = GetElem(L,5,node);
  if(tf)
    cout<<node->data<<endl;
  else
    cout<<"something wrong"<<endl;
  return 0;
}
