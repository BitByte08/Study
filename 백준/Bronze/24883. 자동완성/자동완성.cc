#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char s;
    cin >> s;
    if(s=='n'||s=='N') cout << "Naver D2";
    else cout << "Naver Whale";
    return 0;
}