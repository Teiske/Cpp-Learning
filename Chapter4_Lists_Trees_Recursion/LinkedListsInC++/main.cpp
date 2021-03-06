#include <iostream>

using namespace std;

struct node {
	int x;
	node *next;
};

int main() {
	node *root;
	node *conductor;

	//Setting the point to something otherwise it wont work.
	root = new node;
	root->next = 0;
	root->x = 12;

	//The conductor points to the first node
	conductor = root;

	if (conductor != 0) {
		while (conductor->next != NULL) {//You can check for NULL or zero, both work
			cout << conductor->x << "\n";
			conductor = conductor->next;
		}
		cout << conductor->x << "\n";
	}

	//Creates a node at the end of the list to prevent
	//it from going further
	conductor->next = new node;
	conductor = conductor->next;
	conductor->next = 0;
	conductor->x = 42;
}

