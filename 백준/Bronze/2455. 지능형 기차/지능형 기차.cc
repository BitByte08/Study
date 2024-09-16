#include <iostream>
using namespace std;

int main() {
	int cnt,max;cnt=max=0;
	for (int i = 0; i < 4; i++) {
		int a,b; cin >> a >> b;
		cnt += b - a;
		if (cnt > max) max = cnt;
	}
	cout << max;
	return 0;
}