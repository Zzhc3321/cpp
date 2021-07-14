#include <iostream>
#include <vector>
using namespace std;

double solvation(vector<int>& nums1,vector<int>& nums2){
  int m=nums1.size(),n=nums2.size();
  vector<double> result(m+n);
  int i=0,j=0,k=0;
  while(k<=(m+n)/2){
    if((i<m&&nums1[i]<nums2[j]) || j>n-1 )
      result[k++]=nums1[i++];
    else
      result[k++]=nums2[j++];
  }
  if((m+n)%2==0)
    return (result[(m+n)/2-1]+result[(m+n)/2])/2;
  else
    return result[(m+n)/2];
}

// double solvation(int nums1[],int nums2[],int m,int n){
//
// }

int main(){
  vector<int> nums1(2),nums2(2);
  nums1[0]=0;
  nums1[1]=0;
  nums2[0]=0;
  nums2[1]=0;

  cout<<solvation(nums1,nums2)<<endl;
  return 0;
}
