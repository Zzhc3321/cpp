#include <iostream>
using namespace std;
//n个人中选出k个的选法数

/* [分析 ]：
（n选k） 等于 （n-1选k）+（n-1选k-1）
*/

int func(int n,int k){
  if(n<k || k==0)
    return 0;
  else if(n==k)
    return 1;
  else
    return func(n-1,k)+func(n-1,k-1);
}
int main(){
  int n,k;
  cout<<"Please input the total number of people :"<<endl;
  cin>>n;
  cout<<"Please input the number you want to pick out of the people to form a team:"<<endl;
  cin>>k;
  cout<<"The answer of this question is : "<<func(n,k)<<endl;
}
