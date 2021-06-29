#include <iostream>
using namespace std;

template <class T>

class Node{
private:
  Node<T> *next;
public:
  T data;
  Node(const T& item,Node<T>*next = 0);
  void insertAfter(Node<T> *p);
  Node<T> *deleteAfter();
  Node<T> *nextNode() const;
};

void Node<T>::insertAfter(Node<T> *p){
  p->next = next;
  next = p;
}

Node<T> *Node<T>::deleteAfter(void){
  Node<T>*tempter = next;
  if(next==0)
    return 0;
  next = tempter->next;
  return tempter;
}

int main(){

  return 0;
}
