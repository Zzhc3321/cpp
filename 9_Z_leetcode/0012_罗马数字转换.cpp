#include <iostream>
#include <string>
using namespace std;

string intToRoman(int num) {
  string res = "";
  int nums[4]={0};
  int i=3;
  while(num){
    nums[i--]=num%10;
    num/=10;
  }
  for(int j=i;j<4;j++){
    int k = nums[j];
    switch (j) {
      case 3:{
        if(k>5){
          if(k==9)
            res+="IX";
          else{
            res+="V";
            for(int m=0;m<k-5;m++)
              res+='I';
          }
        }
        else if(k<5){
          if(k==4)
            res+="IV";
          else{
            for(int m=0;m<k;m++)
              res+='I';
          }
        }
        else
          res+='V';
        break;
      }
      case 2:{
        if(k>5){
          if(k==9)
            res+="XC";
          else{
            res+="L";
            for(int m=0;m<k-5;m++)
              res+='X';
          }
        }
        else if(k<5){
          if(k==4)
            res+="XL";
          else{
            for(int m=0;m<k;m++)
              res+='X';
          }
        }
        else
          res+='L';
        break;
      }
      case 1:{
        if(k>5){
          if(k==9)
            res+="CM";
          else{
            res+="D";
            for(int m=0;m<k-5;m++)
              res+='C';
          }
        }
        else if(k<5){
          if(k==4)
            res+="CD";
          else{
            for(int m=0;m<k;m++)
              res+='C';
          }
        }
        else
          res+='D';
        break;
      }
      case 0:{
        for(int m=0;m<k;m++)
          res+='M';
          break;
      }


    }
  }
  return res;
}

int main(){
  string res = intToRoman(1);
  cout<<res;
  return 0;
}
