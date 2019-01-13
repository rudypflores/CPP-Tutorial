#include <iostream>

using namespace std;

//Basic Struct syntax and implementation
struct Laptop {
	string name;
	int cores;
	int ram;
} L1;

void print(struct Laptop L);

int main(void) {
	struct Laptop L2;

	L1.name = "Razer Blade Stealth 13";
	L1.cores = 4;
	L1.ram = 16;

	L2.name = "Macbook Pro 15";
	L2.cores = 2;
	L2.ram = 8;

	print(L1);
	print(L2);

	return 0;
}

void print(struct Laptop L) {
	cout << "Name: " << L.name << endl;
	cout << "Cores: " << L.cores << endl;
	cout << "RAM: " << L.ram << "GB\n\n";
}