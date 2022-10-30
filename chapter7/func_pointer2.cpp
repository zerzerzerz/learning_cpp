#include <iostream>
using namespace std;
typedef void (*FuncPointer) (const char*);

void greet(const char* name){
    cout << "Hello, " << name << "!" << endl;
    return;
}

int main(){
    // void (*a[3]) (const char*) = {greet, greet, greet};
    FuncPointer a[3] = {greet, greet, greet};

    // p_a1 is a pointer to the array a
    // &a is the address of array a
    // void (*(*p_a1)[3])(const char*) = &a;
    auto p_a1 = &a;

    // p_a2 is a pointer, pointing to the first element of array a
    // a is the address of a's first element
    // void (**p_a2) (const char*) = a;
    auto p_a2 = a;
    const char* names[3] = {
        "Shengqi Liu",
        "Zanwei Zhou",
        "Ruizhe Zhong"
    };

    for(int i=0; i<3; ++i){
        a[i](names[i]);
    }

    cout << "This is p_a1, auto p_a1 = &a;" << endl;
    for(int i=0; i<3; ++i){
        // both OK
        // (*p_a1)[i](names[i]);
        (*((*p_a1)+i))(names[i]);
    }

    cout << "This is p_a2, auto p_a2 = a;" << endl;
    for(int i=0; i<3; ++i){
        (*(p_a2+i))(names[i]);
    }
    return 0;
}

