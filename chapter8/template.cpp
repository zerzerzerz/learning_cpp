#include <iostream>
using namespace std;

template <typename T>
void my_func(T&a, T&b){
    cout << "This is template function" << endl;
    return;
}

template <typename T>
void my_func(T&a, T&b, T&c){
    cout << "This is an overload for template function" << endl;
    return;
}

// explicit specification
template <> void my_func(double&a, double&b){
    cout << "This is explicit specification for double" << endl;
    return;
}

// explicit instantiation
// use original template to generate the definition for char
template void my_func<char>(char&a, char&b);



template <typename T1, typename T2>
void my_try(const T1&a, const T2&b){
    cout << a << "\t" << b << endl;
    return;
}

int main(){
    int a,b,c;
    double d,e;
    char f,g;

    my_func(a,b);
    my_func(a,b,c);

    my_func(d,e);
    my_func(f,g);


    my_try(a,d);
    return 0;
}