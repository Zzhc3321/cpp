#include <iostream>
#include <string>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
  if (!strs.size()) {
      return "";
  }
  if (strs.size()==1){
    return strs[0];
  }

  string res=strs[0];
  for(int i=1;i<strs.size();i++){
    int len1=res.length();
    int len2=strs[i].length();
    int len = len1>len2? len2:len1;
    string t="";
    for(int j=0;j<len;j++){
      if(res[j]==strs[i][j]){
        t+=res[j];
      }
      else
       break;
    }
    res = t;
  }
  return res;
}

int main(){
  vector<string> s(2);
  s[0] = "test";
  s[1] = "tetss";
  cout<<longestCommonPrefix(s)<<endl;
  return 0;
}
