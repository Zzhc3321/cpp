#include <iostream>
#include <string>
using namespace std;

bool find(char *p,int len,char c){
  for(int i=0;i<len;i++)
    if (c==*(p+i))
      return true;
  return false;
}

int solvation(string S){
  int res=0;
  int max=0;
  char *k=&S[0];
  for(int i=0;i<S.length();i++){
    while(find(k,res,S[i])){
      res--;
      k++;
    }
    if(!find(k,res,S[i])){
      res++;
      if(max<res){
        max=res;
      }
    }
  }
  return max;
}

int main(){
  string res = "test";
  char c='p';
  char *p=&res[0];
  cout<<solvation("abcabcbb")<<endl;
  return 0;
}
