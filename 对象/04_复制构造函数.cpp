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
  return 0;
}
