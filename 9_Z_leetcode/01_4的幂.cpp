#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        while(n){
            if(n==1)
            return true;
            if(n%4==0)
                n = n/4;
            else
                break;
        }
        return false;
    }

    // 位运算n&(n-1)==0 判断是否是2幂
    bool isPowerOfFour2(int n) {
        return n > 0 && (n &1) == 0 && n%3==1;
        // (n & 1) == 0 判断是否是2的倍数
    }

};

int main(){
Solution stou;
cout<<stou.isPowerOfFour2(4*4*4*4*4)<<endl;
}
