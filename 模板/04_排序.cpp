#include <iostream>
using namespace std;

template <class T>
void show_elem(T a[],int n){
  for(int i=0;i<n;i++)
    cout<<a[i]<<' ';
  cout<<endl;
}

template <class T>
void insertionSort(T a[],int n){
  int i,j;
  T tem;
  for(int i=1;i<n;i++){
    int j=i;
    tem = a[i];
    while(j>0&&tem<a[j-1]){
      a[j] = a[j-1];
      j--;
    }
    a[j] = tem;
  }
}



int main(){
  int n;
  cout<<"please enter an intger: ";
  cin>>n;
  int a[n];

  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  show_elem(a,n);
  insertionSort(a,n);
  show_elem(a,n);
  return 0;
}
