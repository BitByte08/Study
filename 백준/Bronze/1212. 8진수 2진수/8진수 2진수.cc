#include <iostream>
#include <string>
using namespace std;
int main(void) {
	string s; cin >> s;
	string s2[8] = { "000", "001", "010", "011", "100", "101", "110", "111" };
	for (int i = 0; i < s.length(); i++) {     
		int temp = s[i] - '0';
		if (i == 0) cout << stoi(s2[temp]);
		else cout << s2[temp];
	}
}