#include<string>
#include<iostream>
using namespace std;

inline void test(const char*title,bool value){
  cout<<title<<" returns "<<(value?"true":"false")<<endl;
}

int main(){
  string s1="DEF";
  cout<<"s1 is "<<s1<<endl;

  string s2,s3,s4;
  cout<<"please enter s2: ";
  cin>>s2;

  cout<<"length of s2: "<<s2.length()<<endl;

  test("s1<=\"ABC\"",s1<+"ABC");

  s2+=s1;
  cout<<"s2+s1: "<<s2<<endl;
  cout<<"length of s2: "<<s2.length()<<endl;

  getline(cin,s3);//不以空格分隔
  getline(cin,s4,',');//以逗号为分隔符

  return 0;
}
