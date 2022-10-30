#include <iostream>
using namespace std;

void fill_array(int*a, const int& n){
    for(int i=0; i<n; ++i){
        a[i] = 1;
    }
    return;
}

void show_array(const int* a, const int& n){
    for(int i=0; i<n; ++i){
        cout << a[i] << " ";
    }
    cout << endl;
    return;
}

int sum(int a[][4], const int& n){
    int sum = 0;
    for(int i=0; i<n; ++i){
        for(int j=0; j<4; ++j){
            sum += a[i][j];
        }
    }
    return sum;
}

int main(){
    cout << "Hello, world!" << endl;
    int n = 4;
    int* a = new int [n];
    show_array(a, n);
    fill_array(a, n);
    show_array(a, n);
    delete [] a;

    int age = 12;
    const int *p_age = &age;
    age = 14;
    cout << *p_age << endl;

    const int name = 12;
    const int *p_name = &name;

    int array[2][4] = {
        {1,2,3,4},
        {5,6,7,8}
    };
    cout << "sum of 2d array is " << sum(array, 2) << endl;
    const char *s = "Hello, world!";

    cout << sum << endl;
    cout << show_array << endl;

    return 0;
}