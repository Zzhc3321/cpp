#include <iostream>
#include <string>
using namespace std;

string convert(string s, int numRows){
  string res[numRows];
  for(int p=0;p<numRows;p++)
  for(int t=0;t<s.length();t++)
    res[p]+=' ';
  int i=0,j=0,k=0;
  for(j=0;k<s.length();j++)
    for(i=0;i<numRows && k<s.length();i++){
      if(!(numRows-1) || j%(numRows-1)==0){
        res[i][j]=s[k++];
        }
      else{
        res[numRows-2-i][j++] = s[k++];
        if(numRows-2-i==1)
          i=-1;
      }

  }

  string result = "";
  for(int m=0;m<numRows;m++){
    for(int n=0;n<res[m].length();n++){
      if(res[m][n]!=' ')
      result += res[m][n];
    }
    }
    return result;
}

int main(){
string res = convert("P",1);
cout<<res<<endl;
  return 0;
}
