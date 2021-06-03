#include <iostream>
using namespace std;

class Solution {
public:
    bool checkZeroOnes(string s) {
        int one_n=0,zero_n=0;
        int one_t=0,zero_t=0;
        int l = s.size();
        char s0 = s[0];
        if(s0=='1'){
            one_t++;
            one_n++;
        }
        else{
            zero_n++;
            zero_t++;
        }
        for(int i=1;i<l;i++){
                if(s[i]=='1'){
                    zero_t=0;
                    one_t++;
                    if(one_t>one_n)
                     one_n=one_t;
                }
                else{
                    one_t=0;
                    zero_t++;
                    if(zero_t>zero_n)
                    zero_n = zero_t;
                }
        }
        cout<<zero_n<<one_n<<endl;
        return one_n>zero_n;
    }
};

int main(){
Solution slove;
cout<<slove.checkZeroOnes("01111110")<<endl;
  return 0;
}
