#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;cin >> t;
	cout << "Gnomes:\n";
	while(t--){
		vector beard(3,0);
		for(int i=0;i<3;i++)cin >> beard[i];
		if((beard[1]-beard[0])*(beard[2]-beard[1])>0)cout << "Ordered\n";
		else cout << "Unordered\n";
	}
}