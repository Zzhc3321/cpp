#include <iostream>
using namespace std;

typedef char Elemtype;
const int Max_size=20;

typedef struct sstring{
  Elemtype ch[Max_size];
  int length;
}sstring;

bool StrCopy(sstring &S,sstring s){//赋值
  int i=1;
  for(;i<=s1.length;i++)
    S.ch[i] = s1.ch[i];
  S.length = i-1;
  return true;
}

bool StrEmpty(sstring S){//判空
  return S.length==0;
}

int StrCompare(sstring S,sstring s){//比较
  for(int i=1;i<S.le&&i<=s.length;i++)
    if(S.ch[i]!s.ch[i])
      return S.ch[i]-s.ch[i];
  return S.length-s.length;
}

int StrLen(sstring S){//长度
  return S.length;
}

bool Substring(sstring S,sstring &s,int pos,int len){//求字串
  if (pos+len-1>S.length)
    return false;
  for(int i=pos;i<pos+len;i++)
    s.ch[i-pos+1] = S.ch[i];
  s.length = len;
  return true;
}

bool Concat(sstring &S,sstring s1,sstring s2){//连接
  int i=1;
  for(;i<=s1.length;i++)
    S.ch[i] = s1.ch[i];
  for(;i<=s1.length+s2.length;i++)
    S.ch[i] = s2.[i-s1.length];
  S.length = i-1;
  return true;
}

int Index(sstring S,sstring T){//匹配
  int i=1;n=StrLen(S),m=StrLen(T);
  sstring s;
  while(i<n-m+1){
    Substring(S,s,i,m);
    if(StrCompare(s,T)!=0)
      i++;
    else
      return i;
  }
  return 0;
}

bool ClearString(sstring &S){//清空操作
  S.length=0;
  return true;
}

bool DestoryString(sstring &S){//销毁
  delete S;
  return true;
}

int main(){

  return 0;
}
