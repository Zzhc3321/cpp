#include <iostream>
#include <string>
using namespace std;

string Solution(string s){
  string res="";
  char *p=&s[0];
  int pos,true_pos=0,max_len=0;
  int slen = s.length();
  int flag=0;
  for(pos=1;pos<slen;pos++){
    int len = pos>(slen-pos-1)?(slen-pos-1):pos;
    int i;
    for(i=1;i<=len;i++)
      if(*(p+pos+i)!=*(p+pos-i))
        break;
    i-=1;
    if(2*i+1>max_len){
      max_len = 2*i+1;
      true_pos = pos;
    }
  }

  for(pos=1;pos<slen;pos++){
    int len = pos>(slen-pos-1)?(slen-pos-1):pos;
    int i;
    for(i=1;i<=len+1;i++)
      if(*(p+pos+i)!=*(p+pos+1-i))
        break;
    i-=1;
    if(2*i>max_len){
      cout<<1<<endl;
      max_len = 2*i;
      true_pos = pos;
      flag = 1;
    }

  }
  if(flag==0)
    for(int j=0;j<max_len;j++){
      res+=*(p+true_pos-max_len/2+j);
    }
  else if(flag==1){
    for(int j=1;j<=max_len;j++){
      res+=*(p+true_pos-max_len/2+j);
    }
  }

  return res;
}

int main(){
  string s = Solution("ab");
  cout<<s<<endl;
  return 0;
}
