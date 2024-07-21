#include<iostream>
using namespace std;

long long n, b;
long long A[5][5];
long long tmp[5][5];
long long ans[5][5];

void multi(long long x[5][5], long long y[5][5]) {
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) {
            tmp[i][j] = 0;
            for (int k = 0; k < n; k++) tmp[i][j] += (x[i][k] * y[k][j]);
            tmp[i][j] %= 1000;
        }
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            x[i][j] = tmp[i][j];
}

int main() {
    cin >> n >> b;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cin >> A[i][j];
        ans[i][i] = 1;
    }

    while (b > 0) {
        if (b % 2 == 1) {
            multi(ans, A);
        }
        multi(A, A); 
        b /= 2;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}