#include <iostream>

using namespace std;

//Handles class initialization
//Class Foo ask for an int number which then gets
//defined in Class Bar. When Class Bar gets initialized
//it then gives the number 10 to Class Foo.
class Foo {

public:
	Foo(int x) {
		cout << "Foo's constructor "
			 << "called with "
			 << x
			 << endl;
	}

};

class Bar : public Foo {

public:
	Bar() : Foo(10) {
		cout << "Bar's constructor" << endl;
	}

};

//initialzation lists and scope issues
class Baz {
public:
	Baz(string foo) : foo(foo) {}
	//This is roughly equivalent to
	Baz(string foo) {
		this->foo = foo;
	}
	
private:
	string foo;
};


int main() {
	//Prints out the number 10 from the classes Foo and Bar
	Bar stool;
}

