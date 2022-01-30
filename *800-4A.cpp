#include <iostream>
 
using namespace std;
 
int main() {
	int x, y;
	cin >> x;
	y = x % 2;
	if (y == 0 && x != 2) {
		cout << "YES";
	}
	else
		cout << "NO";
}
