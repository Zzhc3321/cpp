#include <iostream>
#include <string>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {
  int len = height.size();
  int max=0;
  for(int j=1;j<len;j++){
    for(int i=0;i<len-j;i++){
      int leng = height[i]>height[i+j]?height[i+j]:height[i];
      if(leng*j>max)
        max = leng*j;
    }
  }

  return max;
}

int maxArea1(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int ans = 0;
        while (l < r) {
            int area = min(height[l], height[r]) * (r - l);
            ans = max(ans, area);
            if (height[l] <= height[r]) {
                ++l;
            }
            else {
                --r;
            }
        }
        return ans;
    }

int main(){
  vector<int> v(2);
  v[0] = 1;
  v[1] = 1;
  // v[2] = 6;
  // v[3] = 3;
  // v[4] = 5;
  // v[5] = 4;
  // v[6] = 8;
  // v[7] = 3;
  // v[8] = 7;

  int res = maxArea1(v);
  cout<<res<<endl;
  return 0;
}
