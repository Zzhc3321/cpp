#include<iostream>
using namespace std;

const int Max_size=10;

typedef int Elemtype;

struct queue{
  Elemtype data[Max_size];
  int front,rear;
};

bool Init_Q(struct queue &Q){
  Q.front = Q.rear = 0;
  return true;
}

bool Is_empty(struct queue &Q){
  if(Q.front == Q.rear)
    return true;
  return false;
}

bool Is_full(struct queue &Q){
  if((Q.rear+1)%Max_size==Q.front)
    return true;
  return false;
}

bool Enqueue(struct queue &Q, Elemtype e){
  if (Is_full(Q))
    return false;
  Q.data[Q.rear++%Max_size]=e;
  return true;
}

bool Dequeue(struct queue &Q,Elemtype &e){
  if (Is_empty(Q))
    return false;
  e = Q.data[Q.front++%Max_size];
  return true;
}

bool Get_top_elem(struct queue &Q,Elemtype &e){
  e = Q.data[Q.front];
  return true;
}

int main(){
  struct queue Q;
    Elemtype e;

  Init_Q(Q);
  Enqueue(Q,10);
  Enqueue(Q,11);
  Enqueue(Q,13);
  Enqueue(Q,13);
  Enqueue(Q,13);
  Enqueue(Q,13);
  Enqueue(Q,13);
  Enqueue(Q,13);
  Enqueue(Q,13);
  cout<<Is_full(Q)<<endl;
  Dequeue(Q,e);
  cout<<Is_full(Q)<<endl;
  Get_top_elem(Q,e);
  cout<<e<<endl;

  return 0;
}
