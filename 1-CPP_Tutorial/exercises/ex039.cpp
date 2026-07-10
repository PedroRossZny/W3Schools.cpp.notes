#include <iostream>
using namespace std;

int main() {
	int age = 18;

	cout << (age >= 18) << "\n"; // 1 (true), old enough to vote
	cout << (age < 18) << "\n"; // 0 (false)

	int passwordLength = 5;

	cout << (passwordLength >= 8) << "\n"; // 0 (false), too short
	cout << (passwordLength < 8) << "\n"; // 1 (true), needs more characters

	return 0;
}
