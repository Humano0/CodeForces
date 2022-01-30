#include <iostream>
#include <string>
using namespace std;

int main() {
	string hl[3];
	int hlp[3] = { 1,1,1 };
	for (int i = 0; i < 3; i++) {
		cin >> hl[i];
	}
	for (int i = 0; i < 2; i++) {
		for (int x = i+1; x < 3; x++) {
			if (hl[i] == "rock" && hl[x] == "paper") {
				hlp[i] = 0;
			}
			else if (hl[i] == "rock" && hl[x] == "scissors") {
				hlp[x] = 0;
			}
			if (hl[i] == "paper" && hl[x] == "rock") {
				hlp[x] = 0;
			}
			else if (hl[i] == "paper" && hl[x] == "scissors") {
				hlp[i] = 0;
			}
			if (hl[i] == "scissors" && hl[x] == "rock") {
				hlp[i] = 0;
			}
			else if (hl[i] == "scissors" && hl[x] == "paper") {
				hlp[x] = 0;
			}
		}
	}
	int holder = 0;
	int adam;
	for (int i = 0; i < 3; i++) {
		if (hlp[i] == 1) {
			holder++;
			adam = i;
		}
	}
	if (holder == 1) {
		if (adam == 0)
			cout << "F";
		else if (adam == 1)
			cout << "M";
		else if (adam == 2)
			cout << "S";
	}
	else
		cout << "?";
}
