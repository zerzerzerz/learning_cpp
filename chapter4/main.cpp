#include <iostream>
#include <string>
using namespace std;

int main(){
    int a[] = {1,2,3,4};
    auto p = a;
    for(int i=0; i<4; ++i){
        // cout << *(p+i) << " ";
        cout << *p << " ";
        p++;
    }
    return 0;
}