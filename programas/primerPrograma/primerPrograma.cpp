#include<iostream>
#include<iomanip>

using namespace std;

int main () {
    int n[10]; //Array of 10 integers
    for(int i=0;i<10;i++) { //Iterating the loop 10 times
        n[i] = i + 1; //Saving the value into de array position
    }
    cout << "Elemento" << setw(13) << "Valor" << endl;
    for(int j=0;j<10;j++) { //Now iterate another loop to print the saved values in the array
        cout << setw(8) << j << setw(13) << n[j] << endl;
    }
    return 0;
}