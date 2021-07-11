#include <iostream>
using namespace std;

int * func(){
    int * arr = new int[4]{1,2,3,4};
    return arr;
}

int main(){
    int * p = func();
    cout<<*(p+2)<<endl;
    free(p);
    return 0;
}
