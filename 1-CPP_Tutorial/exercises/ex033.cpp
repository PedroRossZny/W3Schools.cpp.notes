#include <iostream>
using namespace std;

int main() {
	int x = 5;

	++x; // Increment x by 1
	cout << x << "\n"; //6

	x = 5;

	--x; // Decrement x by 1
	cout << x << "\n"; // 4

	x = 5;

	++x; // Increment x by 1 (x becomes 6)
	--x; // Decrement x by 1 (x becomes 5 again)

	cout << x << "\n"; // 5

	return 0;
}
