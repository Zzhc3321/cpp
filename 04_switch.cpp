#include <iostream>
using namespace std;
int main(){
  int x;
  cout<<"x:"<<endl;
  cin>>x;
  cout<<"��break��ƥ�䵽�ĵ�һ����ʼ���涼ִ�У�"<<"\n"<<"��break��ֻƥ��һ��"<<"\n"<<"ƥ�䲻��ִ��default"<<endl;
  cout<<"\n"<<"��break"<<endl;
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

  cout<<"\n"<<"��break"<<endl;
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
