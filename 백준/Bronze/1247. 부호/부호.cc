#include <iostream>
using namespace std;
int main() {
	for (int t = 0; t < 3; t++){
		long long sum = 0, a=0;
		int n; cin >> n;
		for (int i = 0; i < n; i++) {
			long long temp; cin >> temp;
			long long temp2 = sum;
			sum = sum + temp;
			if (temp > 0 && temp2 > 0 && sum < 0) a++;
			if (temp < 0 && temp2 < 0 && sum > 0) a--;
		}
		if (a == 0) {
			if (sum == 0) cout << '0' << endl;
			else cout << (sum > 0 ? '+' : '-') << endl;
		}else cout << (a > 0 ? '+' : '-') << endl;
	}
}