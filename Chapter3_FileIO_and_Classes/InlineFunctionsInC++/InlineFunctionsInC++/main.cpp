#include <iostream>

using namespace std;

//Inline function that puts hello on the screen when it's called.
inline void hello() {
	cout << "hello";
}

int main() {
	hello();
	cin.get();
}

