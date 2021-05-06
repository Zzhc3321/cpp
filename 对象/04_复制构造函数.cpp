#include <iostream>
using namespace std;
// 使用一个一级存在的对象去初始化一个同类的新对象
// 函数在类内定义和在类外定义效果是一样的，只是对于较长的程序函数放在类外更有利于读程序；
class clock{
  public:
    clock(int t=0){
      time = t;
    }
    clock(clock &p){
      time = p.time;
      cout<<"copying"<<endl;
    }//复制构造函数
    int gett(){return time;}
  private:
    int time;
};

// 函数的形参是类的对象，复制构造函数被调用
void f(clock p){
  cout<<p.gett()<<endl;
}
// 函数返回值是类的对象，复制构造函数被调用
clock p(){
  clock a(5);
  return a;
}


// clock::clock(clock &p){
//   time = p.time;
//   cout<<"copying"<<endl;
// }

int main(){
  clock a(1);
  clock b(a);
  clock c = a;
  // b和c执行的时候完全相同
  cout<<a.gett()<<endl;
    cout<<b.gett()<<endl;
      cout<<c.gett()<<endl;
  clock d;
  f(a);
  d = p();
  cout<<d.gett()<<endl;


  return 0;
}
