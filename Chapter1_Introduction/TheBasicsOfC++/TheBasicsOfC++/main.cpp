#include <iostream>

using namespace std;

int main() {
	//Returning a message in the console window
	cout << "HEY, you, I'm alive! Oh, and Hello World!\n";

	//Returning a number you put into the console window
	int thisIsANumber;
	cin >> thisIsANumber;
	cin.ignore();
	cout << "You entered: " << thisIsANumber << "\n";
	cin.get();

}
