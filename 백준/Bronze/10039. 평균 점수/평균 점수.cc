#include <iostream>

using namespace std;

int main(void) {
    int i,sum=0;
    for(i=0;i<5;i++) {
        int temp;
        cin >> temp;
        sum+=(temp>40?temp:40);
    }
    cout << sum/5;
    return 0;
}