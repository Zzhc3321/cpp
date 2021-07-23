#include <iostream>
#include <string>
using namespace std;

string convert(string s, int numRows){
  char res[numRows][s.length()]={{" "}};
  int i=0,j=0,k=0;
  // for(j=0;k<s.length();j++)
  //   for(i=0;i<numRows && k<s.length();i++){
  //     if(j%(numRows-1)==0)
  //       res[i][j]=s[k++];
  //     else
  //       res[2-i][j++] = s[k++];
  // }

  for(int m=0;m<numRows;m++){
    for(int n=0;n<s.length();n++){
      cout<<res[m][n];
    }
    cout<<endl;
    }
    return s;
}

int main(){
convert("PAHNAPLSIIGYIR",3);
  return 0;
}
