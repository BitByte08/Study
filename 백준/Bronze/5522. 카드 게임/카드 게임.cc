#include <iostream>
using namespace std;
int main(void){
    uint64_t sum = 0;
    int t=5; while(t--){
        uint64_t temp; cin >> temp;
        sum+=temp;
    }
    cout << sum;
    return 0;
}