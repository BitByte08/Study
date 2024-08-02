#include <bits/stdc++.h>
using namespace std;

int main(void){
	int N,R1,C1,R2,C2,k,n;cin >> N >> R1 >> C1 >> R2 >> C2;
	for(int i=R1; i<=R2; i++){
		for(int j=C1; j<=C2; j++) {
			k = i % (2*N-1);
			n = j % (2*N-1);
			if(k>N-1) {
				k = 2*N - 2 - k;
			}if(n>N-1){
				n = 2*N - 2 - n;
			}if(k+n<N-1) {
				cout << '.';
			}else{
				cout << (char)(97+(2*N-2-(k+n))%26);
			}
		}
		cout << endl;
	}
}