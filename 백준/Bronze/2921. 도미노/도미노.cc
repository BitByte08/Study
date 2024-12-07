#include <iostream>
using namespace std;
int main(void) {
	int n; cin >> n;
	int res = 0;
	for (int i = 0; i < n+1; i++) {
		for (int j = 0; j < i+1; j++) {
			res += i+j;
		}
	}
	cout << res;
	return 0;
}