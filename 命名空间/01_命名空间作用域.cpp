#include <iostream>
using namespace std;

/*
标识符要声明在前，引用在后。
在同一作用域中，不能声明同名的标识符。
在没有相互包含关系的不同作用域中声明了同名标识符则外层在内层不可见。

可见性原则也适用于常量名、用户定义的类型名、函数名、枚举类型等等
*/


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
