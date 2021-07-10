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

bool build_list(int a,int b,LinkedList &res){
  return true;
}

bool show_elem(LinkedList L){

  return true;
}

int main(){

  return 0;
}
