#include <iostream>

using namespace std;

struct xamp1 {
	int x;
};


int main() {
	xamp1 structure;
	xamp1 *ptr;
	//Hanldes an int from a struct and then uses a pointer to acces the assigend data
	structure.x = 12;
	ptr = &structure;

	cout << ptr->x;

	cin.get();
}

