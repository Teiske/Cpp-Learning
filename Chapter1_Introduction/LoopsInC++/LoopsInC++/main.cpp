#include <iostream>

using namespace std;

int main() {
	//For loop
	for (int x = 0; x < 10; x++) {
		cout << x << endl;
	}

	cout << "" << endl;

	//While loop
	int y = 0;

	while (y < 10) {
		cout << y << endl;
		y++;
	}

	cout << "" << endl;

	//Do While loop
	int z;

	z = 0;
	do {
		cout << "Hello, world!\n";
	} while (z != 0);
	cin.get();
}
