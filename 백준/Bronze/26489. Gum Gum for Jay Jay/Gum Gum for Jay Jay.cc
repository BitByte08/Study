#include <iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
    string s; int cnt = 0;
	while (getline(cin, s)) cnt++;
	cout << cnt;
}