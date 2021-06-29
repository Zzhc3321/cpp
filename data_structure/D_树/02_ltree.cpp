#include <iostream>
using namespace std;
// ¶þ²æÊ÷µÄÁ´Ê½´æ´¢
const int Max_size = 100;

typedef int Elemtype;

typedef struct BiTNode{
  Elemtype data;
  BiTNode *lchild, *rchild;
}BiTNode,*BiTree;

int main(){
  BiTree root;
  root = new BiTNode;
  root->data = 1;
  root->lchild = NULL;
  root->rchild = NULL;
  return 0;
}
