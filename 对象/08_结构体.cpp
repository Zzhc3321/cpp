#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
// �ṹ���������һ��
// Ϊ���Ǻ�c���ּ���
// �ṹ��ֻ���������ݳ�Ա������������Ա
// ���ݹ���

// ѧ����Ϣ�ṹ��
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
