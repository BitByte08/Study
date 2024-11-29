#include <iostream>
using namespace std;
int main(void) {
	for (int i = 0; i < 3; i++) {
		int a, b, c, d; cin >> a >> b >> c >> d;
		int n = a + b + c + d;
		if (n == 0) cout << 'D' << endl;
		else if (n == 1) cout << 'C' << endl;
		else if (n == 2) cout << 'B' << endl;
		else if (n == 3) cout << 'A' << endl;
		else if (n == 4) cout << 'E' << endl;
	}
}

