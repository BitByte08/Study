#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++,puts("")) {
		int a, b; cin >> a >> b;
		if (a < b)cout << "NO BRAINS";
		else cout << "MMM BRAINS";
	}
}