#include <fstream>
#include <iostream>

using namespace std;

//Handles a comment line argument which prints out
int main(int argc, char *argv[]) {

	if (argc != 2) {//Checks if argc is 2
		cout << "usage: " << argv[0] << " <filename>\n";
	}
	else {
		ifstream the_file(argv[1]);

		if (!the_file.is_open()) {//Check if file opening has succeeded
			cout << "Could not open this file\n";
		}
		else {
			char x;
			//the_file.get returns false if the end is reached
			//or an error occurs
			while (the_file.get(x)) {
				cout << x;
			}
		}
		//the_file is closed here
	}
}
