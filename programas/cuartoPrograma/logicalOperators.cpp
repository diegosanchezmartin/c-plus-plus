#include <iostream>
using namespace std;
int main(){
    int a = 5;
    int b = 15;
    int c;

    if(a && b){
        cout << "Condition is true" << endl;
    } else {
        cout << "Condition is false" << endl;
    }

    if(a || b){
        cout << "Condition is true" << endl;
    } else {
        cout << "Condition is false" << endl;
    }

    //A value is inserted into c

    c = 10;
    if((a < c)&&(a < b)){
        cout << "Condition is true if both conditions are true" << endl;
    } else {
        cout << "Condition is false if one of the operators or both are false" << endl;
    }

    if((c > b)||(b >= a)){
        cout << "Condition is true if one condition is true" << endl;
    } else {
        cout << "Condition is false if none of the operators are true" << endl;
    }

    return 0;
}