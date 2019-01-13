#include <iostream>
using namespace std;

class Box {
	//Declaration of non-protected variables
	public:
		double length;
		double breadth;
		double height;

		Box(double length, double breadth, double height);//Constructor


		//We initialize the function
		double getVolume(void);
};

//And assign a value to the function before calling it
double Box::getVolume(void) {
	return length * height * breadth;
}

//This syntax initializes the passed in variables when creating a new object!
Box::Box(double l, double b, double h): length(l), breadth(b), height(h) {
	cout << "Object 'Box' created successfully..." << endl;
}

int main() {
	Box Box1(5.0, 5.0, 10.0);
	Box Box2(5.0, 6.0, 10.0);

	double volume = 0.0;

	//Volume of Box1 and Box2
	volume = Box1.getVolume();
	cout << "Volume of Box1: " << volume << endl;
	volume = Box2.getVolume();
	cout << "Volume of Box2: " << volume << endl;

	return 0;
}