#include <iostream>
using namespace std;
// first namespace
namespace first_space {
    void func(){
        cout << "First namespace" << endl;
    }
}
// second namespace
namespace second_space {
    void func() {
        cout << "Second namespace" << endl;
    }
}
using namespace second_space;
int main() {
    func();
    return 0;
}