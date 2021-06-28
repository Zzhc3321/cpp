#include <iostream>
using namespace std;

typedef char Elemtype;
const int Max_size=20;

typedef struct sstring{
  Elemtype ch[Max_size];
  int length;
}sstring;

int Index(sstring S,sstring T){
  int i=1;j=1;
  while(i<S.length&&j<T.length){
    if(S.ch[i]==T.ch[i]){
      ++i;++j;
    }
    else{
        i = i-j+2;
        j=1;
    }
    if(j>T.length) return i-T.length;
    return 0;
  }
}

void get_next(sstring T,int next[]){
  int i=1,j=0;
  next[1]=0;
  while(i<T.length){
    if(j==0||T.ch[i]==T.ch[j]){
      ++i;++j;
      next[i] = j;
    }
    else
    j = next[j];
  }
}

void get_nextval(sstring T,int get_nextval[]){
  int i=0,j=0;
  nextval[1]=0;
  while(i<T.length){
    if(j==0||T.ch[i]=T.ch[j]){
      ++i;++j;
      if(T.ch[i]!=T.ch[j]) nextval[i] = j;
      else nextval[i] = nextval[j];
    }
    else j=nextval[j];
  }
}

int KMP(sstring S,sstring T,int next[]){
  int i=1,j=1;
  get_next(next);
  while(i<=S.length&&j<=T.length){
    if(j==0||S.ch[i]==T.ch[j]){
      ++i;++j;
    }
    else
      j = next[j];
  }
  if(j>T.length)
    return i-T.length;
  return 0;
}

int main(){

  return 0;
}
