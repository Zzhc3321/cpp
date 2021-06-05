#include <iostream>
using namespace std;

const int maxsize=15;
typedef int ElemType;

struct List{
    ElemType data[maxsize];
    int length;
};

bool Solution(List &L){
    int start = L.length/2;
    ElemType tem;
    for(int i=1;i<=start;i++){
        tem = L.data[i-1];
        L.data[i-1] = L.data[L.length-i];
        L.data[L.length-i] = tem;
    }
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
    Solution(LS);
    cout<<"The soultion of this question is : ";
    ShowElem(LS);

    return 0;
}
