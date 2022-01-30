#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n, m, p, fin=0;
	cin >> n >> m;
	priority_queue<int> k;
	for (int i = 0; i < n; i++) {
		cin >> p;
		k.push(-p);
	}
	for (int i = 0; i < m; i++) {
		if (k.top() < 0) {
			k.pop();
			continue;
		}
		fin += k.top();
		k.pop();
	}
	cout << fin;
}
