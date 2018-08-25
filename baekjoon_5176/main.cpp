#include <iostream>
#include <string.h>
using namespace std;

int t, n, s, i1, c;
bool seat[501];
int main() {
	cin >> t;
	while (t--) {
		cin >> n >> s;
		memset(seat, 0, s+1);
		for (int i = 0; i < n; i++) {
			cin >> i1;
			if (!seat[i1]) seat[i1] = true;
			else c++;
		}
		cout << c << endl;
		c = 0;
	}
	return 0;
}