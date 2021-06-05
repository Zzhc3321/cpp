#include <iostream>
using namespace std;

const int maxsize=15;
typedef int ElemType;

struct List{
    ElemType data[maxsize];
    int length;
};

bool Solution(List &L,ElemType &min_data){
    min_data=L.data[0];
    int pos=0;
    for(int i=1;i<L.length;i++)
        if(min_data>L.data[i]){
            min_data = L.data[i];
            pos = i;
        }
    L.data[pos] = L.data[L.length-1];
    L.length--;
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
    ElemType res;
    Solution(LS,res);
    cout<<"The min elem is : "<<res<<endl;
    cout<<"The result of this solution is : ";
    ShowElem(LS);
    
  return 0;
}
