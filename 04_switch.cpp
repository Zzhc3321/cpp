#include <iostream>
using namespace std;
int main(){
  int x;
  cout<<"x:"<<endl;
  cin>>x;
  cout<<"无break，匹配到的第一个开始后面都执行；"<<"\n"<<"有break，只匹配一个"<<"\n"<<"匹配不到执行default"<<endl;
  cout<<"\n"<<"无break"<<endl;
  switch(x%5){
    case 0:
      cout<<0<<endl;
    case 1:
      cout<<1<<endl;
    case 2:
      cout<<2<<endl;
    default:
      cout<<"default"<<endl;
  }

  cout<<"\n"<<"有break"<<endl;
  switch(x%5){
    case 0:
      cout<<0<<endl;
      break;
    case 1:
      cout<<1<<endl;
        break;
    case 2:
      cout<<2<<endl;
        break;
    default:
      cout<<"default"<<endl;
        break;
  }
    return 0;
}
