#include <iostream>
#include <string>
using namespace std;



bool isPalindrome(int x) {
  if(x<0)
  return false;
  int len=1;
  int t=x,k=x;
  while(t/10){
      t /= 10;
      len += 1;
  }
  int res[len];
  for(int i=0;i<len;i++){
    res[i] = k%10;
    k/=10;
  }
  for(int j=0;j<len/2;j++)
    if(res[len-1-j]!=res[j])
      return false;

return true;
}

int main(){
  bool res = isPalindrome(0);
  cout<<res<<endl;
  return 0;
}
