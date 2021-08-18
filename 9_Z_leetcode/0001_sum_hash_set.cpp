#include <iostream>
#include <map>
using namespace std;

int main(){
  typedef pair<int,int> Elem_pair;
  map<int,int> hash_tab;
  // hash_tab.insert(Elem_pair(1,100));
  int nums[4],res[2];
  nums[0] = 2;
  nums[1] = 7;
  nums[2] = 11;
  nums[3] = 111;
  int target = 9;
  for(int i=0;i<4;i++){
    int t = target - nums[i];
    if(hash_tab.find(t)==hash_tab.end())
        hash_tab.insert(Elem_pair(nums[i],i));
    else{
      res[0] = hash_tab[t];
      res[1] = i;
    }
  }
  cout<<res[0]<<endl;
  cout<<res[1]<<endl;

  return 0;
}
