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

	//Checks if two input string are both true
	string user_username;
	string user_password;

	cout << "enter your username: " << "\n";
	getline(cin, user_username, '\n');

	cout << "enter your password: " << "\n";
	getline(cin, user_password, '\n');
	if (user_username == "root" && user_password == "xyzzy") {
		cout << "acces allowed " << "\n";
	}
	else {
		cout << "bad username or password. denied acces!" << "\n";
		return 0;
	}

	cout << "\n";

	//Practice problem 1
	int user_age_one;
	int user_age_two;

	cout << "Enter the first age: " << "\n";
	cin >> user_age_one;
	cout << "Enter the second age: " << "\n";
	cin >> user_age_two;

	if (user_age_one && user_age_two >= 100) {
		cout << "User 1 and user 2 are both older then 100, how are they still alive?\n";
	}
	else if (user_age_one == user_age_two) {
		cout << "User 1 and user 2 are the same age\n";
	}
	else if (user_age_one < user_age_two) {
		cout << "User 1 is younger then user 2\n";
	}
	else {
		cout << "User 1 is older then user 2\n";
	}

}