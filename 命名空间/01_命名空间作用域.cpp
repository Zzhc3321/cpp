#include <iostream>
using namespace std;

int i;// ȫ�������ռ��ȫ�ֱ���

namespace Ns{
  int j;//Ns�����ռ��е�(ȫ�ֱ���)
}

int main(){
  i = 5; //ȫ�ֱ���i��ֵ
  Ns::j=6; //Ϊȫ�ֱ���j��ֵ
  {//�ӿռ�
    using namespace Ns;
    int i;
    i = 7;
    cout<<"i="<<i<<endl;
    cout<<"j="<<j<<endl;
  }
  cout<<"i="<<i<<endl;
  cout<<"j="<<Ns::j<<endl;
  return 0;
}
