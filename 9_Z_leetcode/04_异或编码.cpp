#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
    int l = encoded.size();
    vector<int> res(l+1);
    res[0]=first;
    for(int i=0;i<l;i++){
        res[i+1] = res[i]^encoded[i];
    }
    return res;
    }
};

int main(){
    int i=0;
Solution slove;
vector<int> t(3);
t[0] = 1;
t[1] = 2;
t[2] = 3;
vector<int> res(4);
res = slove.decode(t,1);
for(i=0;i<res.size()-1;i++)
cout<<res[i]<<',';
cout<<res[i]<<endl;

  return 0;
}
