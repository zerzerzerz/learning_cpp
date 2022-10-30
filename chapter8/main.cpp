#include <iostream>
using namespace std;

template <typename T>
T sum(const T&a, const T&b){
    return a+b;
}

void func(int*a){
    *a += 1;
    return;
}

void func1(int* const a){
    *a += 1;
    return;
}

void func2(int&a){
    a+=1;
    return;
}



int main(){
    int a = 1;
    func2(a);
    cout << a << endl;

    int x=1, y=2;
    cout << sum(x,y) << endl;

    return 0;
}