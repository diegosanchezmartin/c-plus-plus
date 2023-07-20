#include<iostream>
using namespace std;
int main() {

    int a = 10;
    cout << "Value at the beginning: " << a << endl;
    a+=1;
    cout << "Value after executing a+=1: " << a << endl;
    a-=1;
    cout << "Value after executing a-=1: " << a << endl;
    a*=2;
    cout << "Value after executing a*=2: " << a << endl;
    a/=2;
    cout << "Value after executing a/=2: " << a << endl;
    
    int b=2;
    int q=8;

    a%=b;
    cout << "Value after executing a%b(b=2): " << a << endl;
    a%=q;
    cout << "Value after executing a%q(q=8): " << a << endl;
    q<<=2;
    cout << "Value after executing q<<=2: " << q << endl;
    q>>=2;
    cout << "Value after executing q>>=2: " << q << endl;
    b&=2;
    cout << "Value after executing b&=2: " << b << endl;
    b^=2;
    cout << "Value after executing b^=2: " << b << endl;
    b|=2;
    cout << "Value after executing b|=2: " << b << endl;

    return 0;
    
}