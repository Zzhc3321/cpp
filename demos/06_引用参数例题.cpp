#include <iostream>
using namespace std;
int main(){
  int intOne;
  int &rref = intOne;

  intOne = 5;
  cout<<"intOne is : \t"<<intOne<<endl;
  cout<<"rref is : \t"<<rref<<endl;

  int intTwo=8;
  rref = intTwo;
  cout<<"intOne is : \t"<<intOne<<endl;
  cout<<"intTwo is : \t"<<intTwo<<endl;
  cout<<"rref is : \t"<<rref<<endl;
  return 0;
}
