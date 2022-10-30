#include <iostream>
using namespace std;

typedef int (*fp_sum)(const int&, const int&);

int sum(const int&a, const int&b){
    return a+b;
}

int exec(fp_sum f, const int&a, const int&b){
    return f(a,b);
}

int main(){
    int a = 1;
    int b = 2;
    // fp_sum f1 = sum;
    auto f1 = sum;
    cout << exec(f1,a,b) << endl;
    return 0;
}

