#include <iostream>
#include <cmath>

using namespace std;

bool prime(int i) {
    int rt = sqrt(i);
    if (rt == 1 && i != 1) return true;
    if (i%2) {
        for(int j = 2; j <= rt; j++){
            if(!(i%j)) return false;
            if(j==rt) return true;
        }
    }
}
int main() {
    int t;
    cin >> t;
    for (int test_case = 0; test_case < t; test_case++) {
        int n;
        cin >> n;
        for(int i = n / 2; i >= 2; i--){
            if(prime(i) && prime(n - i)){
                cout << i << " " << n - i << '\n';
                break;
            }
        }
    }
}