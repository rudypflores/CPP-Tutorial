#include <iostream>
using namespace std; //We import std in order to use strings and print to console!

extern double number;
extern string s;

void writeExtern(void) {
	cout << number << endl;
	cout << s;
}