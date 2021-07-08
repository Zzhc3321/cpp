#include <iostream>
using namespace std;

typedef int Elemtype;

typedef struct BSTNode{
  Elemtype data;
  BSTNode *lchild, *rchild;
}BSTNode,*BSTTree;

bool BST_Insert(BSTTree &T,Elemtype elm){
  if(T==NULL){
    T = new BSTNode;
    T->data = elm;
    T->lchild = T->rchild = NULL;
    return true;
  }
  else if(elm==T->data)
    return false;
  else if(elm<T->data)
    return BST_Insert(T->lchild,elm);
  else
    return BST_Insert(T->rchild,elm);
}

bool Med_Insert(BSTTree &T,BSTTree p){
  Med_Insert(T,p->lchild);
    BST_Insert(T,p->data);
  Med_Insert(T,p->rchild);
}

void Creat_BST(BSTTree &T,Elemtype str[],int n){
  T = NULL;
  int i=0;
  while(i<n){
    BST_Insert(T,str[i]);
    i++;
  }
}


BSTNode* loop_search(BSTTree T,Elemtype e){
  while(T!=NULL && e!=T->data){
    if(e<T->data) T=T->lchild;
    else T=T->rchild;
  }
  return T;
}

BSTNode* recursion_search(BSTTree T,Elemtype e){
  if(e==T->data || T==NULL)
    return T;
  else if(e<T->data)
    recursion_search(T->lchild,e);
  else
    recursion_search(T->rchild,e);
  return NULL;
}


bool Delete_elem(BSTTree &T,Elemtype e){
  BSTTree p = loop_search(T,e);
  if(p==NULL)
    return false;
  else{
    delete p;
    Med_Insert(T,p);
  }
  return true;
}

void PreOrder(BSTTree T){
  if(T!=NULL){
    cout<<T->data<<' ';
    PreOrder(T->lchild);
    PreOrder(T->rchild);
  }
}

void MedOrder(BSTTree T){
  if(T!=NULL){
    MedOrder(T->lchild);
        cout<<T->data<<' ';
    MedOrder(T->rchild);
  }
}

int main(){
  Elemtype a[10]={50,66,26,21,30,70,68,8,9,10};
  BSTTree T;
  Creat_BST(T,a,10);
  BST_Insert(T,11);
  PreOrder(T);
  Delete_elem(T,11);
  PreOrder(T);
  return 0;
}
