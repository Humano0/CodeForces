#include <iostream>
 
using namespace std;
 
int main() {
	int x, y=0, z=0;
	int a, b, c;
	cin >> x;
	for (int i = 0; i < x; i++) {
		cin >> a >> b >> c;
		if (a == 1) {
			y++;
		}
		if (b == 1) {
			y++;
		}
		if (c == 1) {
			y++;
		}
		if (y >= 2) {
			z++;
		}
		y = 0;
	}
	cout << z;
}
