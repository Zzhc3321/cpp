#include <iostream>
using namespace std;

typedef int Elemtype;

typedef struct Node{
  Elemtype data;
  Node* next;
}*Qnode;

typedef struct queuqe{
  Qnode front;
  Qnode rear;
}queuqe,*Que;

bool Init_Q(Que &Q){
  Q = new queuqe;
  Q->front = Q->rear = new Node;
  Q->front->next = NULL;
  return true;
}

bool Is_empty(Que &Q){
  if(Q->front==Q->rear)
    return true;
  return false;
}

bool Enqueue(Que &Q,Elemtype e){
  Qnode s;
  s->data = e;
  s->next = NULL;
  Q->rear->next = s;
  Q->rear = s;
  return true;
}

bool Dequeue(Que &Q,Elemtype &e){
  if(Is_empty(Q))
    return false;
  Qnode p=Q->front->next;
  e = p->data;
  Q->front->next = p->next;
  if(Q->rear==p)
    Q->front=Q->rear;
  delete p;
  return true;
}

int main(){
  Que Q;
  Init_Q(Q);
  cout<<Is_empty(Q)<<endl;
  Enqueue(Q,10);
  Enqueue(Q,12);
  cout<<Is_empty(Q)<<endl;
  Elemtype e;

  Dequeue(Q,e);
  cout<<e<<endl;


  return 0;
}
