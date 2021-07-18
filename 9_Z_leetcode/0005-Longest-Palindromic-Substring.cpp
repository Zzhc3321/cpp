#include <iostream>
#include <string>
using namespace std;

string Solution(string s){
  string res="";
  char *p=&s[0];
  int pos,true_pos=0,max_len=0;
  int slen = s.length();
  for(pos=1;pos<slen-1;pos++){
    int len = pos>(slen-pos-1)?(slen-pos-1):pos;
    int i;
    for(i=1;i<=len;i++)
      if(*(p+pos+i)!=*(p+pos-i))
        break;
    i = i==len+1?i-1:i-2;
    if(i>max_len){
      max_len = i;
      true_pos = pos;
    }

  }

  for(pos=1;pos<slen-1;pos++){
    int len = pos>(slen-pos-1)?(slen-pos-1):pos;
    int i;
    for(i=1;i<=len;i++)
      if(*(p+pos+i)!=*(p+pos-i))
        break;
    i = i==len+1?i-1:i-2;
    if(i>max_len){
      max_len = i;
      true_pos = pos;
    }

  }

  cout<<true_pos<<" "<<max_len<<endl;
  for(int j=0;j<=2*max_len;j++){
    res+=*(p+true_pos-max_len+j);
  }

  return res;
}

int main(){
  string s = Solution("babad");
  cout<<s<<endl;
  return 0;
}
