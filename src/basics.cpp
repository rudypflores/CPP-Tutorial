/*My first C++ program*/

/*
	**Steps to compiling your first program in terminal**

	use g++ <file directory> -o <name for object made>
	then, use ./<object name>

	~/<file name> helps you access your file without having 
	to write the whole file extension as well!
*/

#include <iostream>
using namespace std;

double number;
extern void writeExtern();
string s;

int main() {
	//cout is our print to console keyword
    cout 
    //how to use sizeof operator
    << "The size of a signed int is: " << sizeof(int) << endl;
    cout
    //String concatenation, endl is for next line
    << "concatenation" << " of " << "strings" << endl;

    //typedef can change naming conventions of data types!
    typedef int num;
    num x = 20;

    cout << "our typedef is: " << x << endl;

    //Practice enum
    enum shapes {circle, triangle, square};
    shapes c = square;

    cout << c << endl;

    //Macros in C++
    //It is good practice to name your variables in CAPITALS
    const int HEIGHT = 3;
    const int WIDTH = 5;
    const int AREA = HEIGHT * WIDTH;
	
    cout << AREA << endl;

    //using extern keyword in c++
    //writeExtern method is written in external.cpp
    number = 44.5;
    s = "hello\n";
    writeExtern();

    //chmod u+x <file directory> helps giving admin permisions when compiling
    //Arithmetic Operators
    const int A = 20;
    const int B = 10;

    int sum = A+B;
    int subtract = A-B;
    int divide = A/B;
    int mod = A%B;
    int multiply = A*B;

    //IO print with combined int and strings
    cout << sum << "\n" << subtract << endl;
    cout << divide << endl;
    cout << mod << endl;
    cout << multiply << endl;

    //Misc operators
    cout << sizeof(A) << endl; //returns size in bytes of data type
    A > B ? cout << "true" << endl : cout << "false" << endl; //conditional operator
    int these, are, different, variables = 0; //make variables in the same line
    cout << variables << endl;
    double cast = 3.5;
    cout << (int) cast << endl; //(type) value == casting, where we convert a data type to another

    

    return 0;
}