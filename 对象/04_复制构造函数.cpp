#include <iostream>
using namespace std;
// ʹ��һ��һ�����ڵĶ���ȥ��ʼ��һ��ͬ����¶���
// ���������ڶ���������ⶨ��Ч����һ���ģ�ֻ�Ƕ��ڽϳ��ĳ�������������������ڶ�����
class clock{
  public:
    clock(int t=0){
      time = t;
    }
    clock(clock &p){
      time = p.time;
      cout<<"copying"<<endl;
    }//���ƹ��캯��
    int gett(){return time;}
  private:
    int time;
};

// �������β�����Ķ��󣬸��ƹ��캯��������
void f(clock p){
  cout<<p.gett()<<endl;
}
// ��������ֵ����Ķ��󣬸��ƹ��캯��������
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
  // b��cִ�е�ʱ����ȫ��ͬ
  cout<<a.gett()<<endl;
    cout<<b.gett()<<endl;
      cout<<c.gett()<<endl;
  clock d;
  f(a);
  d = p();
  cout<<d.gett()<<endl;


  return 0;
}
