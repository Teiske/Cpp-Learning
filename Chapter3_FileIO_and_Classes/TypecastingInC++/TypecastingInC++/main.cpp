#include <iostream>

using namespace std;

int main() {
	//Example of a typecast:
	//It's going to interpret the 65 as a character which should be
	//the letter A for ASCII.
	cout << (char)65 << "\n"; //C supported

	cout << char(65) << "\n"; //C++ supported

	cout << static_cast<char>(65) << "\n"; //C++ supported

	//A typecast For Loop
	for (int x = 0; x < 128; x++) {
		cout << x << ". " << (char)x << " ";
		//If the For Loop ran correctly then it should typecast
		//the x into a character corresponding to the ASCII
		//character current number.
	}

	cin.get();
}

