#include <iostream>

using namespace std;

void main() {
	int age;

	//Handles an age input and tells you if you're young, old or really old
	cout << "Pleas Input your age: ";
	cin >> age;
	cin.ignore();
	if (age < 100) {
		cout << "You are pretty young!\n";
	}
	else if (age == 100) {
		cout << "You are old\n";
	}
	else {
		cout << "You are really old\n";
	}
	cin.get();
}
