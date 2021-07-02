template <class T>
class Node{
private:
  Node<T> *next;
public:
  T data;
  Node(const T& item,Node<T>*next = 0);
  void insertAfter(Node<T> *p);
  Node<T> *deleteAfter();
  const Node<T> *nextNode() const;
};

template <class T>
Node<T>::Node(const T& item,Node<T>*next):data(item),next(next){}

template <class T>
const Node<T>* Node<T>::nextNode() const {return next;}

template <class T>
void Node<T>::insertAfter(Node<T> *p){
  p->next = next;
  next = p;
}

template <class T>
Node<T> *Node<T>::deleteAfter(void){
  Node<T>*tempter = next;
  if(next==0)
    return 0;
  next = tempter->next;
  return tempter;// È»ºóÉ¾³ýdelete
}
