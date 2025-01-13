#include <iostream>
using namespace std; 
int main() {
	int k; cin >> k;
	while (k--) {
		int a,b; cin >> a >> b;
		bool arr[501] = {};
		int cnt = 0;
		for (int i = 0; i < a; i++) {
			int temp; cin >> temp;	
			if (arr[temp]) cnt++;
			else arr[temp] = 1;
		}
		cout << cnt << '\n';
	}
 
}