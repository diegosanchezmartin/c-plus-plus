#include<iostream>

using namespace std;

int main() {
	unsigned int a = 60; // 60 = 0011 1100
	unsigned int b = 13; // 13 = 0000 1101
	int c = 0;
	c = a & b; // c = 00001100 -> 12 
	cout << "El valor de c es: " << c << endl;
	c = a | b; // c = 00111101 -> 61
	cout << "El valor de c es: " << c << endl;
	c = a ^ b; // c = 00110001 -> 49
	cout << "El valor de c es: " << c << endl;
	c = ~a; // c = 11000011 -> 197 
	cout << "El valor de c es: " << c << endl;
	c = a << 2; // c = 11110000 -> 240 
	cout << "El valor de c es: " << c << endl;
	c = a >> 2; // c = 00001111 -> 15 
	cout << "El valor de c es: " << c << endl;

	return 0;
}
