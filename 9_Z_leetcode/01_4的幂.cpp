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
};

int main(){
Solution stou;
cout<<stou.isPowerOfFour(4*4*4*4*3)<<endl;

}
