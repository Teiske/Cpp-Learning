#include <fstream>
#include <iostream>

using namespace std;

int main() {
	char str[10];

	//Handles sending a string to a txt file
	ofstream a_file("example.txt");
	a_file << "This text will now be inside of example.txt";
	a_file.close();
	ifstream b_file("example.txt");

	//Check if the file can be openend
	if (!b_file.is_open()) {
		cout << "The file could not be opened\n";
	}
	else {
		cout << "Safely use the file stream\n";
	}

	//If everything went correctly it should print 'This'
	b_file >> str;
	cout << str << "\n";

	//ofstream c_file("test.txt", ios::app);

	cin.get();
}

