#include <iostream>
using namespace std;

// ��������һ��������̬����
// �������Լ������ݳ�Ա�ͺ�����Ա
// �������Լ��Ĺ������������
// ���Է��ʿ���Ȩ��
// Ĭ�Ϸ��ʿ��������ǹ�����
// �������ȫ�����ݳ�Ա����һ���ڴ浥Ԫ
// ����������еĳ�Աͬʱ����ֻ��һ���������

// ������ĸ��������Ա���������Զ���Ĺ��캯�����������������غ���
// �����岻�ܼ̳У��޶�̬�ԣ�

// һ��ֻ�����������洢һЩ���е����ݣ�����Ϊ�����庯����Ա

// ��������Բ��������ƣ���Ϊ����������


class ExamInfo{
public:
  ExamInfo(string name,char grade){
    name="English";
    mode=GRADE;
    grade=grade;}
  ExamInfo(string name,bool pass):name(name),mode(PASS),pass(pass){}
  ExamInfo(string name,int percent):name(name),mode(PERCENTAGE),percent(percent){}
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
