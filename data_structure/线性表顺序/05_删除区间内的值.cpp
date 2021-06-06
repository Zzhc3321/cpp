#include <iostream>
using namespace std;

const int maxsize=15;
typedef int ElemType;

struct List{
  ElemType data[maxsize];
  int length;
};

bool Solution(List &L,int min,int max){
  int start,end;
  for(int i = 0;i<L.length;i++)
    if(L.data[i]>=min){
      start = i;
      break;
    }
05.


  for(int i = start;i<L.length;i++)
    if(L.data[i]>max)
      end = i;
  cout<<start<<end<<endl;
  if(start==end)
    return false;
  else
    for(int i=start;i<end;i++)
      L.data[i] = L.data[i+end-start];
  L.length -= (end-start);
  return true;

}


void ShowElem(List L){
  for(int i=0;i<L.length;i++)
    cout<<L.data[i]<<' ';
  cout<<endl;
}

int main(){
  List LS;
  cout<<"Enter an intger number which is below than "<<maxsize<<" : ";
  cin>>LS.length;
  for(int i=0;i<LS.length;i++){
      cout<<"Enter data "<<i+1<<" : ";
      cin>>LS.data[i];
  }
  ShowElem(LS);
  Solution(LS,3,5);
  cout<<"The soultion of this question is : ";
  ShowElem(LS);


  return 0;
}
