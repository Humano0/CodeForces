#include <iostream>
 
using namespace std;
 
int main() {
	int x;
	int a;
	cin >> x;
	a = x * (x + 1) / 2;
	if (a % 2 == 0) {
		cout << "0";
	}
	else cout << "1";
}
