#include <iostream>
using namespace std;

int i;// 全局命名空间的全局变量

namespace Ns{
  int j;//Ns命名空间中的(全局变量)
}

int main(){
  i = 5; //全局变量i赋值
  Ns::j=6; //为全局变量j赋值
  {//子空间
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
