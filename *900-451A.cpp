#include <iostream>
 
using namespace std;
 
int main() {
	int n, m;
	int intersect;
	int fin = 0;
	cin >> n >> m;
	intersect = n * m;
 
	if (n == 1 || m == 1) {
		cout << "Akshat";
		return 0;
	}
	while (intersect != 0) {
		n--;
		m--;
		intersect = n * m;
		fin++;
	}
	if (fin % 2 == 0) {
		cout << "Malvika";
	}
	else
		cout << "Akshat";
}
