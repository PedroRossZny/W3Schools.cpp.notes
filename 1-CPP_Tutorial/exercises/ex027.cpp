#include <iostream>
using namespace std;

int main() {
	auto x = 5; // x is automatically treated as int

	// Creating auto variables
	auto myNum = 5; // int
	auto myFloatNum = 5.99f; // float
	auto myDoubleNum = 9.98; // double
	auto myLetter = 'D'; // char
	auto myBoolean = true; // bool
	auto myString = string("Hello"); // std::string

	auto y = 5; // y is now an int

	y = 10; // OK - still an int
	// y = 9.99; // Error - can't assign a double to an int

	return 0;
}
