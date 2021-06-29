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

int main(){

  return 0;
}
