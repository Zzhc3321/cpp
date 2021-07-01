#include <iostream>
#include<queue>
using namespace std;
// ¶þ²æÊ÷µÄÁ´Ê½´æ´¢
const int Max_size = 100;

typedef int Elemtype;

typedef struct BiTNode{
  Elemtype data;
  BiTNode *lchild, *rchild;
}BiTNode,*BiTree;

void PreOrder(BiTree T){
  if(T!=NULL){
    cout<<T->data<<' ';
    PreOrder(T->lchild);
    PreOrder(T->rchild);
  }
}

void MedOrder(BiTree T){
  if(T!=NULL){
    MedOrder(T->lchild);
    cout<<T->data<<' ';
    MedOrder(T->rchild);
  }
}

void BaOrder(BiTree T){
  if(T!=NULL){
    BaOrder(T->lchild);
    BaOrder(T->rchild);
    cout<<T->data<<' ';
  }
}

void ArrOrder(BiTree T){
  queue<BiTNode*> q;
  q.push(T);
  BiTNode *t;
  while(!q.empty()){
    t = q.front();
    q.pop();

    cout<<t->data<<' ';
    if(t->lchild)
      q.push(t->lchild);
    if(t->rchild)
      q.push(t->rchild);
  }
  cout<<endl;
}

int main(){
  BiTree root;
  root = new BiTNode;
  root->data = 0;
  root->lchild = new BiTNode;
  root->rchild = new BiTNode;
  root->lchild->data = 1;
  root->rchild->data = 2;
  root->lchild->lchild = NULL;
  root->lchild->rchild = NULL;
  root->rchild->lchild = NULL;
  root->rchild->rchild = NULL;
  PreOrder(root);
  cout<<endl;
  MedOrder(root);
  cout<<endl;
  BaOrder(root);
  cout<<endl;
  ArrOrder(root);

  return 0;
}
