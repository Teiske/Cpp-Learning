#include <iostream>

class Animal
{
public:
	Animal();
	~Animal();
	void eat();
	void sleep();
	void drink();

private:
	int legs;
	int arms;
	int age;
};

class Cat : public Animal
{
public:
	int fur_color;
	void purr();
	void fish();
	void markTerritory();
};

int main() {
    
}
