#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int n;
    cin >> n;

    if(n%7==0||n%7==2){
        cout << "CY";
    }else cout << "SK";

    return 0;
}