#include <iostream>
using namespace std;

typedef int Elemtype;

typedef struct LNode{
  Elemtype data;
  struct LNode *next;
}LNode,*Llist;

bool Init_circle_link_list(&L){
  L = new(LNode);
  L->next = L;
}

int main(){
  Llist = L;
  return 0;
}
