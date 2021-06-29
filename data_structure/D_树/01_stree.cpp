#include <iostream>
using namespace std;
// 完全二叉树的顺序存储
const int Max_size = 100;

typedef int Elemtype;

typedef struct{
  Elemtype value;
  bool isEmpty;
}TreeNode;

bool get_lchild(TreeNode t[],int father_pos,Elemtype &data){
  if(t[2*father_pos].isEmpty)
    return false;
  else
    data = t[2*father_pos].value;
  return true;
}

bool get_rchild(TreeNode t[],int father_pos,Elemtype &data){
  if(t[2*father_pos+1].isEmpty)
    return false;
  else
    data = t[2*father_pos+1].value;
  return true;
}

bool get_fahter(TreeNode t[],int this_pos,Elemtype &data){
  data = t[this_pos/2].value;
  return true;
}

int main(){
  TreeNode t[Max_size];
  return 0;
}
