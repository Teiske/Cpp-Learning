#include <iostream>

using namespace std;

void playgame() {
	cout << "Play game called\n";
}
void loadgame() {
	cout << "Load game called\n";
}
void playmultiplayer() {
	cout << "Play multiplayer game called\n";
}

int main() {
	int input;

	//Text to display in the window
	cout << "1. Play game\n";
	cout << "2. load game\n";
	cout << "3. Play multiplayer\n";
	cout << "4. Exit\n";
	cout << "Selection: ";
	cin >> input;

	//Switch statement which outputs different text depending on case input
	switch (input) {
	case 1:
		playgame();
		break;
	case 2:
		loadgame();
		break;
	case 3:
		playmultiplayer();
		break;
	case 4:
		cout << "Thank you for playing!\n";
		break;
	default:
		cout << "Error, bad input, quitting\n";
		break;
	}
	cin.get();
}
