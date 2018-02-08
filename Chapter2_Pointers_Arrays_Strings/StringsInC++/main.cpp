#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char string[256];

	char name[50];
	char lastname[50];
	char fullname[100];

	//Short example of how an input string works
	cout << "Please enter a long string: ";
	cin.getline(string, 256, '\n');
	cout << "Your long string was: " << string << endl;

	//Handles string input of a name, firsy checks of it is the same name
	//as a predefined name, if yes or no, cout a special string, then continue as normal.
	cout << "Please enter your name: ";
	cin.getline(name, 50);
	if (strcmp(name, "Teis") == 0) {
		cout << "That's my name too.\n";
	}
	else {
		cout << "That's not my name.\n";
	}

	cout << "Your name is " << strlen (name) << " Letters long\n";
	cout << "Enter your last name: ";
	cin.getline(lastname, 50);
	fullname[0] = '\0';
	strcat_s(fullname, name);
	strcat_s(fullname, " ");
	strcat_s(fullname, lastname);
	cout << "Your full name is " << fullname << "\n";

	cin.get();
}
