#include <iostream>
using namespace std;

#define MKSTR(x) #x

//# With # operator text can be converted to string surrounded by quotes.

int main() {
    cout << MKSTR(HELLO C++) << endl;
    return 0;
}