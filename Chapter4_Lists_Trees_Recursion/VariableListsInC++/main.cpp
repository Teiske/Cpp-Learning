#include <cstdarg>
#include <iostream>

using namespace std;

double average(int num, ...) {
	va_list arguments;
	double sum = 0;

	//Initialize the arguments and loop until
	//all the numbers are added, then clean up
	//the list
	va_start(arguments, num);
	for (int x = 0; x < num; x++) {
		sum += va_arg(arguments, double);
	}
	va_end(arguments);

	return sum / num;
}

//Compute the average, the first number indicates the
//number of values to average
int main() {
	cout << average(3, 12.2, 22.3, 4.5) << endl;

	cout << average(5, 3.3, 2.2, 1.1, 5.5, 3.3) << endl;
}
