/*My first C++ program*/

/*
	**Steps to compiling your first program in terminal**

	use g++ <file directory> -o <name for object made>
	then, use ./<object name>

	~/<file name> helps you access your file without having 
	to write the whole file extension as well!
*/

#include <iostream>
#include <cmath> //import for math built in C++ functions
#include <cstdlib> //import for random number generation function

using namespace std;

double number;
extern void writeExtern();
string s;
void swapValue(int p, int q);
void swapPoint(int* p, int* q);
void swapReference(int &p, int &q);

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

    /*Types of loops*/
    //while loop
    //this loop runs until the condition becomes false or runs >= 2
    int runs = 0;
    while(runs < 2) {
        cout << runs << " ";
        runs++;
    }

    cout << endl;
    
    //for loop 
    //runs until i is >= runs
    for(int i = 0; i < runs; i++) {
        cout << i << " next ";
    } cout << endl;

    //do while loop
    runs = 0;
    do {
        cout << "this runs because do while runs atleast once\n";
    } while(runs < 0);

    //fun fact: c++ allows up to 256 levels of nesting of loops.
    //goto statements can transfer you to a certain run of your loop.
    //if the loop never becomes false it is known to be an infinite loop.
    /*Flow statements*/
    //if, else and if/else statement
    int condition = 3;
    if(condition < 5) {
        cout << "The condition is less than three" << endl;
    } else if(condition == 5) {
        cout << "The condition is equal to 5" << endl;
    } else {
        cout << "The condition is greater than 5" << endl;
    }

    //switch statement
    switch(condition) {
        case 1: 
            cout << "less than 3" << endl;
            break;
        case 2:
            cout << "still less than 3" << endl;
            break;
        case 3:
            cout << "equal to 3" << endl;
            break;
    }

    //Functions in c++
    int p = 30;
    int q = 16;

    swapValue(p, q);
    cout << p << " and " << q << endl;
    swapPoint(&p, &q);
    cout << p << " and " << q << endl;
    swapReference(p, q);
    cout << p << " and " << q << endl;

    //Math functions in C++
    int mathA = 5;
    int mathB = 13;
    double mathC = 25.7;

    cout << "sin(5): " << sin(5) << endl;
    cout << "floor(25.7): " << floor(mathC) << endl;

    //Random numbers in C++
    srand((unsigned) time(NULL));
    mathB = rand();
    cout << mathB << endl;

    //Arrays in C++

    //Declaration
    double arr[10];
    int arrInt[] = {1, 2, 3, 4, 5};
    int arrInt2[5] = {1, 2, 3, 4, 5};

    //2D array
    int arrInt3[3][3] = {
        {1,2,3},
        {1,2,3},
        {1,2,3}
    };

    //assigning value

    //before
    cout << arrInt[3] << endl;
    arrInt[3] = 99;

    //after
    cout << arrInt[3] << endl;



    //We always return 0 at the end of our main method
    return 0;
}

//function example

//call by value
void swapValue(int p, int q) {
    int temp = p;
    p = q;
    q = temp;

    return;
}

//call by pointer
void swapPoint(int* p, int* q) {
    int temp = *p;
    *p = *q;
    *q = temp;

    return;
}

//call by reference
void swapReference(int &p, int &q) {
    int temp = p;
    p = q;
    q = temp;

    return;
}