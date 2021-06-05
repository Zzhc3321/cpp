#include <iostream>
using namespace std;

const int maxsize=15;
typedef int ElemType;

struct List{
    ElemType data[maxsize];
    int length;
};

bool Solution1(List &L,ElemType x){
    List Ltem = L;
    int i,k;
    for(i=0,k=0;i<L.length;i++){
        if(L.data[i]!=x)
            Ltem.data[i] = L.data[i+k];
        else{
            k++;
            Ltem.data[i] = L.data[i+k];
        }
    }
    L = Ltem;
    L.length -= k;
    return true;
}

bool Solution_(List &L,ElemType x){
    int i,k=0;
    for(i=0;i<L.length;i++){
        if(L.data[i]!=x){
            L.data[k] = L.data[i];
            k++;
        }
    }
    L.length = k;
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

    Solution1(LS,2);
    cout<<"The soultion of this question is : ";
    ShowElem(LS);
    cout<<"Length of this List is : "<<LS.length<<endl;

    Solution_(LS,1);
    cout<<"The soultion of this question is : ";
    ShowElem(LS);
    cout<<"Length of this List is : "<<LS.length<<endl;
    return 0;
}
