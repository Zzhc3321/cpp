#include <iostream>
using namespace std;

typedef char Elemtype;
const int Max_size=20;

typedef struct sstring{
  Elemtype ch[Max_size];
  int length;
}sstring;

bool StrAssign(sstring &S,sstring s){//赋值操作

  return true;
}

bool StrCopy(sstring &S,sstring s){//赋值

  return true;
}

bool StrEmpty(sstring S){//判空

  return true;
}

bool StrCompare(sstring S,sstring s){//比较

  return true;
}

bool StrLen(sstring S,int &len){//长度

  return true;
}

bool Substring(sstring S,sstring &s,int pos,int len){//求字串

  return true;
}

bool Concat(sstring &S,sstring s1,sstring s2){//连接

  return true;
}

bool Index(sstring S,sstring T){//匹配

  return true;
}

bool ClearString(sstring &S){//清空操作

  return true;
}

bool DestoryString(sstring &S){//销毁

  return true;
}

int main(){

  return 0;
}
