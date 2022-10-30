#include <iostream>
#include <cstring>
using namespace std;

int main(){
    // char s1[80] = "Hello, world!";
    // char s2[100] = "Hello, world!";
    // int res = strcmp(s1, s2);
    // cout << res << endl;

    // int a[] = {1,2,3,4};
    // for(int i:a){
    //     cout << i << endl;
    // }
    cout << "Please enter your text.\nEnter # to stop.\n";
    char ch = '\0';
    while(cin.get(ch)){
        cout << ch;
    }

    return 0;
}
