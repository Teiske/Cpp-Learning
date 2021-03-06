#include <iostream>

using namespace std;

int getAge();

int getVisits();

int main() {
	//Example of a typecast:
	//It's going to interpret the 65 as a character which should be
	//the letter A for ASCII.
	cout << (char)65 << "\n"; //C supported

	cout << char(65) << "\n"; //C++ supported

	cout << static_cast<char>(65) << "\n"; //C++ supported

	//A typecast For Loop
	for (int x = 0; x < 128; x++) {
		cout << x << ". " << (char)x << " " << "\n";
		//If the For Loop ran correctly then it should typecast
		//the x into a character corresponding to the ASCII
		//character current number.
	}

	cout << "\n";

	int age = getAge();

	int pain_visits = getVisits();

	//This will always return zero if divide by a lower visit number then age number
	//otherwise it will return one or higher.
	float visit_per_year_1 = pain_visits / age;
	cout << visit_per_year_1 << "\n";

	//This will return the correct values
	float visit_per_year_2 = pain_visits / static_cast<float>(age);
	cout << visit_per_year_2 << "\n";

	//or this
	float visit_per_year_3 = static_cast<float>(pain_visits) / age;
	cout << visit_per_year_3 << "\n";

	cin.get();
}

int getAge() {
	int x;
	cout << "Pleas input an age: ";
	cin >> x;
	return x;
}

int getVisits() {
	int y;
	cout << "Pleas input number of visits: ";
	cin >> y;
	return y;
}
