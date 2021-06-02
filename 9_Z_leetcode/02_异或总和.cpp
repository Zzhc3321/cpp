#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
    int numsSize = nums.size();
    int ans = 0;
    for(int i=0; i<numsSize; i++)
    {
        ans |= nums[i];
    }
    return ans << (numsSize - 1);
}
};

int main(){
Solution stou;
unsigned n;
cout<<"n=";
cin>>n;

vector<int>arr(n);
cout<<"Please input "<<n<<" real numbers:"<<endl;
for(unsigned i=0;i<n;i++){
cin>>arr[i];
}

cout<<stou.subsetXORSum(arr)<<endl;
// int a = 1^3;
// cout<<a<<endl;
}
