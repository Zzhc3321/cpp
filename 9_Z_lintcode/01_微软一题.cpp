#include<iostream>
 #include  <sstream>
using namespace std;

class Solution {
public:
    /**
     * @param originalString: a string
     * @return: a compressed string
     */
    string compress(string &originalString) {
        // write your code here
        int len = originalString.size();
        int flag;
        if(len==0)
        return "";
        int res[len]={0};
        char rs[len]={'0'};
        int po=0;
        rs[po] = originalString[0];
        res[po] = 1;
        for(int i=1;i<len;i++){
            if(originalString[i]==rs[po]){
                res[po]++;
            }
            else{
                po++;
                rs[po]=originalString[i];
                res[po]++;
            }
        }
        if(2*(po+1)>=len)
        return originalString;


        int i,j;
        string result;
        for(j=0,i=0;j<2*(po+1);j++){
            if(j%2==0)
                result+=rs[i];
            else{
                char ct[10];
                sprintf(ct,  "%d" ,res[i++]);
                result += ct;
            }

        }
        // result[2*(po+1)]='\0';
        return result;
    }
};

int main(){

    Solution solve;
    string res="aabbccccccccccccc";
    cout<<solve.compress(res)<<endl;


    return 0;
}
