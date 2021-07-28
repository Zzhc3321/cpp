#include <iostream>
#include <string>
using namespace std;



int myAtoi(string s) {
int i=0;
double res=0;
while(s[i]==' ')
    i++;


if(s[i]=='-'){
    i++;
    while(isdigit(s[i])){
        res*=10;
        int t = s[i]-'0';
        res+=t;
        i++;
    }
    if(res>2147483648)
        return -2147483648;
    else
        return int(-res);
}

else if(s[i]=='+' || isdigit(s[i])){
    i = isdigit(s[i])? i:i+1;
    while(isdigit(s[i])){
        res*=10;
        int t = s[i]-'0';
        res+=t;
        i++;
    }
    if(res>2147483647)
        return 2147483647;
    else
        return int(res);
}

else
    return 0;

}

int main(){
  string s="-42";
  int res = myAtoi(s);
  cout<<res<<endl;
  return 0;
}
