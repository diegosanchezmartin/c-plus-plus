#include <iostream>
using namespace std;
int main() {
    int a = 21;
    int b = 10;
    int c;
    if(a==b){
        cout << "a is equal to b" << endl;
    } else {
        cout << "a is not equal to b" << endl;
    }
    if(a < b){
        cout << "a is lower than b" << endl;
    } else {
        cout << "a is not lower than b" << endl;
    }
    if(a > b){
        cout << "a is greater than b" << endl;
    } else {
        cout << "a is not greater than b" << endl;
    }
    // Now a value it's assigned to c
    c = 21;
    if(c <= b){
        cout << "c is lower or equal to b" << endl;
    } else {
        cout << "c is greater than b" << endl;
    }
    if(c >= a){
        cout << "c is greater or equal to a" << endl;
    } else {
        cout << "c is lower than a" << endl;
    }

    return 0;
}