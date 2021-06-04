#include <iostream>
using namespace std;

class Solution {
public:
    int xorOperation(int n, int start) {
        int ans = 0;
                for (int i = 0; i < n; ++i) {
                    ans ^= (start + i * 2);
                }
                return ans;
        }
};

int main(){
    int i=0;
Solution slove;
cout<<slove.xorOperation(5,0)<<endl;
return 0;
}
