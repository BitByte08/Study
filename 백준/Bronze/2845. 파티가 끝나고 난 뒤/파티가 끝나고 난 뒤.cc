#include <iostream>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    for (int i = 0; i < 5; i++){
        int temp; cin >> temp;
        cout << temp - n*k << ' ';
    }
}