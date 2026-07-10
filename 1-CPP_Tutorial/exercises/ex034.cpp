#include <iostream>
using namespace std;

int main() {
	int peopleInRoom = 0;

	// 3 people enter
	peopleInRoom++;
	peopleInRoom++;
	peopleInRoom++;

	cout << peopleInRoom << "\n"; // 3

	// 1 person leaves
	peopleInRoom--;

	cout << peopleInRoom << "\n"; // 2

	return 0;
}
