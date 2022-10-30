#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "Hello, world!" << endl;
    const char* name = "Ruizhe Zhong";
    printf("Hello, %s!\n", name);

    double a;
    cout << "Please enter a:" << endl;
    cin >> a;
    cout << sqrt(a) << endl;
    return 0;
}