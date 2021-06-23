#include <iostream>
using namespace std;

typedef char Elemtype;
const int Max_size=20;

typedef struct sstring{
  Elemtype ch[Max_size];
  int length;
}sstring;

bool Substring(sstring S,sstring &s,int pos,int len){
  if(pos+len-1>S.length)
    return false;
  for(int i=pos;i<pos+len;i++)
    s.ch[i-pos+1] = S.ch[i];
  s.length = len;
  return true;
}

int main(){
  sstring S;
  for(int i=0;i<5;i++)
    S.ch[i] = 96+i;

  cout<<S.ch<<endl;
  S.length = 5;
  sstring s;
  Substring(S,s,0,2);
  cout<<s.ch<<endl;
  return 0;
}
