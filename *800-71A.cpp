#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
	int x;
	cin >> x;
	string cort;
	for (int i = 0; i < x; i++) {
		cin >> cort;
		if (cort.size() > 10) {
			cout << cort.front() << cort.size()-2 << cort.back() << endl;
		}
		else
			cout << cort << endl;
	}
}
