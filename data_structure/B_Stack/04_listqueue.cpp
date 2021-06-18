#include <iostream>
using namespace std;

typedef int Elemtype;

typedef struct Node{
  Elemtype data;
  Node* next;
}Node,*Qnode;

typedef struct queuqe{
  Qnode front;
  Qnode rear;
}*Que;

bool Init_Q(){
  return true;
}

int main(){
  Que Q;

  return 0;
}
