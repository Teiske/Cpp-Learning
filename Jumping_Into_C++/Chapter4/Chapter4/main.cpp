#include <iostream>
#include <string>

using namespace std;

int main() {
	//If statement that check if the input value is less than 10
	int x;
	
	cout << "Enter a number: ";
	cin  >> x;
	if (x < 10) {
		cout << "You entered a value less than 10" << '\n';
	}

	cout << "\n";

	//If and else stament that check if the input number is negative or not
	int num;

	cout << "Enter a number: ";
	cin  >> num;
	if (num < 0) {
		cout << "You entered a negative number\n";
	}
	else if (num == 0) {
		cout << "You entered zero\n";
	}
	else {
		cout << "You entered a non-negative number\n";
	}

	cout << "\n";
	cin.get();

	//Compares a string
	string password;

	cout << "Enter your password: " << "\n";
	getline(cin, password, '\n');
	if (password == "xyzzy") {
		cout << "Acces allowed " << "\n";
	}
	else {
		cout << "Bad password. Denied acces!" << "\n";
		return 0;
	}

	cout << "\n";

	//Checks if two inpyt string are both true
	string user_username;
	string user_password;

	cout << "Enter your username: " << "\n";
	getline(cin, user_username, '\n');

	cout << "Enter your password: " << "\n";
	getline(cin, user_password, '\n');
	if (user_username == "root" && user_password == "xyzzy") {
		cout << "Acces allowed " << "\n";
	}
	else {
		cout << "Bad username or password. Denied acces!" << "\n";
		return 0;
	}

}