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
    InThread(p->lchild,pre);//������������
    if(p->lchild==NULL){
      p->lchild = pre;//����ǰ������
      p->ltag = true;
    }
    if(pre!=NULL&&pre->rchild==NULL){
      pre->rchild = p;//����ǰ���������
      pre->rtag = true;
    }
    pre=p;
    InThread(p->rchild,pre);//������������
  }
}

void CreateInThread(ThreadTree T){
  ThreadTree pre = NULL;
  if(T!=NULL){
    InThread(T,pre);
    pre->rchild = NULL;//���һ�����
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
