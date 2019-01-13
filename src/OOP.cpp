#include <iostream>
using namespace std;

//Main Parent Class
class Shape {
	private:
		int m_width;
		int m_height;

	public:
		//Constructor
		Shape(int width, int height) : m_width(width), m_height(height) {
			cout << "Shape has been created!" << endl;
		}

		int getWidth(void) {
			return m_width;
		}

		int getHeight(void) {
			return m_height;
		}

		//Framework for different types of implementation
		virtual int calculateArea(void) = 0;
};

//Inherit from parent through ':' accessor
class Rectangle: Shape {
	private:
		string m_color;

	public:
		//Constructor that will assign values in parent class
		Rectangle(int width, int height, string color): Shape(width, height) {
			m_color = color;
		}

		string getColor(void) {
			return m_color;
		}

		int calculateArea(void) {
			return getWidth()*getHeight();
		}
};

//Inherits from shape and implements calculateArea()
class Triangle: Shape {
	private:
		string m_type; 
	public:
		Triangle(int base, int height, string type): Shape(base, height) {
			m_type = type;
		}

		string getType() {
			return m_type;
		}

		int calculateArea(void) {
			return (getWidth()*getHeight())/2;
		}
};

//Where we compile everything!
int main(void) {

	Rectangle Rect(5, 10, "Blue");
	Triangle tri(7, 7, "Equilateral");
	int area;

	area = Rect.calculateArea();

	cout << "Area: " << area << endl;
	cout << "Color: " << Rect.getColor() << endl;

	area = tri.calculateArea();

	cout << "Area: " << area << endl;
	cout << "Type: " << tri.getType() << endl;

	return 0;
}