#include<iostream>
using namespace std;
int main(){
  int x,y;
  cout<<"enter x and y:"<<"\n";
  cin>>x>>y;

  if (x!=y){
    if (x>y)
      cout <<"x>y"<<endl;
    else
      cout<<"x<y"<<endl;
  }
  else
    cout<<"x=y"<<endl;
  return 0;
}
