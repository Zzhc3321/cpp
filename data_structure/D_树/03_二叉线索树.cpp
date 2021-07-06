#include <iostream>
using namespace std;

typedef int Elemtype;

typedef struct ThreadNode{
  Elemtype data;
  struct ThreadNode *lchild,*rchild;
  bool ltag,rtag;
}ThreadNode,*ThreadTree;

void InThread(ThreadTree &p,ThreadTree &pre){
  if(p!=NULL){
    InThread(p->lchild,pre);//线索化左子树
    if(p->lchild==NULL){
      p->lchild = pre;//建立前驱线索
      p->ltag = true;
    }
    if(pre!=NULL&&pre->rchild==NULL){
      pre->rchild = p;//建立前驱后继线索
      pre->rtag = true;
    }
    pre=p;
    InThread(p->rchild,pre);//线索化右子树
  }
}

void CreateInThread(ThreadTree T){
  ThreadTree pre = NULL;
  if(T!=NULL){
    InThread(T,pre);
    pre->rchild = NULL;//最后一个结点
    pre->rtag = true;
  }
}

ThreadNode *Firstnode(ThreadNode *p){
  while(!p->ltag) p=p->lchild;
  return p;
}

ThreadNode *Nextnode(ThreadNode *p){
  if(!p->rtag) return Firstnode(p->rchild);
  else return p->rchild;
}

int main(){

  return 0;
}
