#include <iostream>
//Import these for map implementation
#include <iterator>
#include <map>

using namespace std;

int main(void) {
	//initialize a map<key, value> name
	map<string, int> birthYear;

	//Adding key/value pairs to our map
	birthYear.insert(pair<string, int> ("Rudy", 1998));
	birthYear.insert(pair<string, int> ("Daniel", 1997));
	birthYear.insert(pair<string, int> ("Juan", 2000));

	//printing map key/values
	map<string, int>::iterator itr;
	cout << "\nThe map birthYear is: \n";
	cout << "\tKEY\tELEMENT\n";
	for(itr = birthYear.begin(); itr != birthYear.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second << endl;
	}
	cout << endl;

	return 0;
}