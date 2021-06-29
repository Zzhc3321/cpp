#include <iostream>
using namespace std;

template <class T>

class Test{
public:
  Test():elm(T(0)){}
  Test(T elm):elm(elm){}
  T get_elem(){return this->elm;}
  void set_elm(T elm){this->elm=elm;}
private:
  T elm;
};

int main(){
  Test<int> test1;
  Test<double> test2;
  cout<<test1.get_elem()<<endl;
  test1.set_elm(100);
  test2.set_elm(11.11);
  cout<<test1.get_elem()<<endl;
  cout<<test2.get_elem()<<endl;

  return 0;
}
