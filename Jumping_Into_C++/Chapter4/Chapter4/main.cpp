#include <iostream>

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

	cin.get();
}