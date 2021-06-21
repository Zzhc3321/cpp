#include<iostream>
#include<cstring>
using namespace std;

void reverse(char *s,char *t){
  char c;
  if(s<t){
    c = *s;
    *s = *t;
    *t = c;
    reverse(++s,--t);
  }
}

void reverse(char *s){
  reverse(s,s+strlen(s)-1);
}

int main(){
  char s[20];
  cin>>s;
  reverse(s);
  cout<<s<<endl;
  return 0;
}
