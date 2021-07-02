#include "Node.h"

template<class T>
class Linklist{
private:
  Node<T>*front,*rear;
  Node<T>*prevPtr,*currPtr;
  int size;
  int position;
  Node<T> *newNode(const T&item,Node<T> *ptrNext=NULL);
  void freeNode(Node<T>*p);
  void copy(const Linklist<T>&L);
public:
  Linklist();
  Linklist(const Linklist<T> &L);
  ~Linklist();
  Linklist<T> & operator = (const Linklist<T>&L);//÷ÿ‘ÿ∏≥÷µ‘ÀÀ„

  int getSize() const;
  bool isEmpty()const;

  void reset(int pos=0);
  void next();
  bool endOfList() const;
  int currentPosition() const;

  void insertFront(const T&item);
  void insertRear(const T&item);
  void insertAt(const T*item);
  void insetAfeter(const T&item);

  T deleteFront();
  void deleteCurrent();

  T& data();
  const T&data() const;

  void clear;

};
