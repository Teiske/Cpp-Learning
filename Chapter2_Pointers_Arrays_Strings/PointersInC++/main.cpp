#include <iostream>

using namespace std;

int main() {
	int x;
	int *p;

	//Handles a pointer which point to the memory of an int
	p = &x;
	cin >> x;
	cin.ignore();
	cout << *p << "\n";
	cin.get();
}

