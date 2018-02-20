#include <iostream>
#include <string>

using namespace std;

int main() {
	//Read input number
	int thisisanumber;

	cout << "Please enter a number: ";
	cin  >> thisisanumber;
	cout << "You entered: " << thisisanumber << "\n";

	cout << "\n";

	//Calculator with input
	int first_argument;
	int second_argument;

	cout << "Enter first argument: ";
	cin  >> first_argument;
	cout << "Enter second argument: ";
	cin  >> second_argument;

	cout << "\n";

	cout << first_argument << " * " << second_argument << " = " << first_argument * second_argument << endl;
	cout << first_argument << " + " << second_argument << " = " << first_argument + second_argument << endl; //Practice problem 2
	cout << first_argument << " / " << second_argument << " = " << first_argument / second_argument << endl;
	cout << first_argument << " - " << second_argument << " = " << first_argument - second_argument << endl;

	cout << "\n";

	//Read input string
	//Practice problem 1
	string user_name;

	cout << "Please enter your name: ";
	cin  >> user_name;
	cout << "Hi " << user_name << "\n";

	cout << "\n";

	//Read unput string for a full name
	string user_first_name;
	string user_last_name;

	cout << "Please enter your first name: ";
	cin  >> user_first_name;
	cout << "Please enter your last name: ";
	cin  >> user_last_name;

	string user_full_name = user_first_name + " " + user_last_name;

	cout << "Your name is: " << user_full_name << "\n";

	cout << "\n";

	//Practice problem 3
	int int_arg_one;
	int int_arg_two;

	double double_arg_one;
	double double_arg_two;

	cout << "Please enter the first int: ";
	cin  >> int_arg_one;
	cout << "Please enter the second int: ";
	cin  >> int_arg_two;

	cout << "\n";

	cout << "Please enter the first double: ";
	cin  >> double_arg_one;
	cout << "Please enter the second double: ";
	cin  >> double_arg_two;

	cout << "\n";

	cout << int_arg_one    << " / " << int_arg_two    << " = " << int_arg_one    /    int_arg_two << endl;
	cout << double_arg_one << " / " << double_arg_two << " = " << double_arg_one / double_arg_two << endl;

	cin.get();
}
