#include <iostream>
using namespace std;

typedef int Elemtype;

typedef struct Node{
  Elemtype data;
  Node *next;
}Node,*LinkedList;

bool Init_list(LinkedList &L){
  L = new Node;
  L->next = NULL;
  return true;
}

bool Insert_data_by_tail(LinkedList &L,Elemtype elm){
  Node *p=L,*elem;
  while(p->next!=NULL)
    p = p->next;
  elem = new Node;
  elem->data=elm;
  elem->next = NULL;
  p->next = elem;
  return true;
}

bool Insert_data_by_head(LinkedList &L,Elemtype elm){
  Node *elem;
  elem = new Node;
  elem->data=elm;
  elem->next = L->next;
  L->next = elem;
  return true;
}

bool show_elem(LinkedList L){
  Node *p=L;
  while(p->next!=NULL){
    p = p->next;
    cout<<p->data<<"->";
  }
  cout<<"NULL"<<endl;
  return true;
}


bool build_list(int a,int b,LinkedList &res){
  LinkedList A,B;
  Init_list(A);
  Init_list(B);

  while(a){
    Insert_data_by_tail(A,a%10);
    a /= 10;
  }
  while(b){
    Insert_data_by_tail(B,b%10);
    b /= 10;
  }
  show_elem(A);
  show_elem(B);

  int T=0,t;
  Node *m=A->next,*n=B->next;
  while(m!=NULL){
    t = m->data+n->data+T;
    T=t>9?1:0;
    Insert_data_by_tail(res,t%10);
    m = m->next;
    n = n->next;
  }
  return true;
}


int main(){
  LinkedList res;
  Init_list(res);
  build_list(342,465,res);
  show_elem(res);
  return 0;
}
