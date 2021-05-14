#include <iostream>
using namespace std;

// 联合体是一种特殊形态的类
// 可以有自己的数据成员和函数成员
// 可以有自己的构造和析构函数
// 可以访问控制权限
// 默认访问控制属性是公共型
// 联合体的全部数据成员共享一组内存单元
// 联合体变量中的成员同时至多只有一个有意义的

// 联合体的各个对象成员，不能有自定义的构造函数、析构函数和重载函数
// 联合体不能继承（无多态性）

// 一般只用联合体来存储一些共有的数据，而不为它定义函数成员

// 联合体可以不声明名称，即为无明联合体


class ExamInfo{
public:
  ExamInfo(string name1,char grade1){
    name=name1;
    mode=GRADE;
    grade=grade1;
  }
  // 初始化话参数列表
  ExamInfo(string name1,bool pass1):name(name1),mode(PASS),pass(pass1){}
  ExamInfo(string name1,int percent1):name(name1),mode(PERCENTAGE),percent(percent1){}
  void show();

private:
  string name;
  enum{
    GRADE,
    PASS,
    PERCENTAGE
  }mode;
  union{
    char grade;
    bool pass;
    int percent;
  };
};

void ExamInfo::show(){
  cout<<name<<":";
  switch(mode){
    case GRADE:
      cout<<grade;
      break;
    case PASS:
      cout<<(pass?"PASS":"FAIL");
      break;
    case PERCENTAGE:
      cout<<percent;
      break;
  }
  cout<<endl;
}

int main(){
  ExamInfo course1("English",'B');
    ExamInfo course2("Calculus",true);
      ExamInfo course3("C++ Programming",145);
  course1.show();
    course2.show();
      course3.show();
    return 0;
}
