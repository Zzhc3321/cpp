#include <iostream>
using namespace std;

typedef int ElemType;
const int maxsize=10;

struct Sqlist{
  ElemType data[maxsize];
  int length;
};

bool ListInsert(Sqlist &L,int i,ElemType e){
  if(i<1||i>L.length||L.length>maxsize)
  return false;
  for(int j=L.length;j>=i;j--)
    L.data[j] = L.data[j-1];
  L.data[i-1] = e;
  L.length++;
  return true;
}

bool ListDelete(Sqlist &L,int i,ElemType &e){
  if(i<1||i>L.length)
  return false;
  e = L.data[i-1];
  for(int j=i;j<L.length;j++)
    L.data[j-1] = L.data[j];
  L.length--;
  return true;
}

int LocateElem(Sqlist &L,ElemType e){
  for(int j=0;j<L.length;j++)
    if(L.data[j]==e)
      return ++j;
  return -1;
}

void ShowElem(Sqlist L){
  for(int i=0;i<L.length;i++)
    cout<<L.data[i]<<' ';
  cout<<endl;
}

int main(){
  Sqlist L1;
  L1.length = 8;
  for(int i=0;i<L1.length;i++)
    L1.data[i] = i+1;
  ShowElem(L1);

  cout<<ListInsert(L1,3,9)<<endl;
  ShowElem(L1);
  cout<<L1.length<<endl;

  ElemType delete_e;
  cout<<ListDelete(L1,3,delete_e)<<endl;
  ShowElem(L1);
  cout<<L1.length<<' '<<delete_e<<endl;

  return 0;
}
