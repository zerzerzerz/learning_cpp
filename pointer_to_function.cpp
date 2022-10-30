#include <iostream>
#include <string>
using namespace std;

void greet(const string& s);

// declare a function to call greet
void execute_greet(void (*p_greet)(const string& s), const int& time, const string& s);

int main(){
    int time = 10;
    string s = "Ruizhe Zhong";

    // declare a pointer to function
    void (*p_greet)(const string& s);
    // assign
    p_greet = greet;

    // use auto
    auto p_greet1 = greet;

    execute_greet(p_greet1, time, s);
    return 0;


}

void greet(const string& s){
    cout << s << endl;
    return;
}

void execute_greet(void (*p_greet)(const string& s), const int& time, const string& s){
    for(int i=0; i<time; ++i){
        p_greet(s);
    }
    return;
}

