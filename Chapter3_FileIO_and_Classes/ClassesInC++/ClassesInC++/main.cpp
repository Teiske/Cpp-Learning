#include <iostream>

using namespace std;

//A simple class that outputs processorspeed onto the screen
class Computer {
public:
	Computer ();
	~Computer ();

	void setspeed(int p);
	int readspeed();
private:

protected:
	int processorspeed;

};

Computer ::Computer () {
	processorspeed = 0;
}

Computer ::~Computer () {

}

void Computer::setspeed(int p) {
	processorspeed = p;
}

int Computer::readspeed() {
	return processorspeed;
}

int main() {
	Computer compute;

	compute.setspeed(100);

	cout << compute.readspeed();
}

