#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
// 结构体与类基本一致
// 为的是和c保持兼容
// 结构体只允许定义数据成员，不允许函数成员
// 数据公有

// 学生信息结构体
struct Student{
  int num;
  string name;
  char gender;
  int age;
};


int main(){
  Student stu={185288,"zzhc",'M',21};
  cout<<"name:"<<stu.name<<endl;
  cout<<"student_id:"<<stu.num<<endl;
  cout<<"age:"<<stu.age<<endl;
  return 0;
}
