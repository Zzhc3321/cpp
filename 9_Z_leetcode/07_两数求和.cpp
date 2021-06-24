#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        vector <int>a(2);
        for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                if (nums[i]+nums[j]==target){
                    a[0]=i;
                    a[1]=j;
                    return a;
                }
            }
        }
        return a;
    }

int main(){
  vector <int>a(2);
  vector <int>data(4);
  data = {1,2,3,4};
  a = twoSum(data,4);
  cout<<a[0]<<endl;
  cout<<a[1]<<endl;
  return 0;
}
