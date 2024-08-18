#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    getchar();
    int cnt = 0;
    for(int i=0;i<n;i++) {
        string s; getline(cin, s);
        if(s=="Never gonna give you up") {
            cnt++;
        }else if(s=="Never gonna let you down") {
            cnt++;
        }else if(s=="Never gonna run around and desert you") {
            cnt++;
        }else if(s=="Never gonna make you cry") {
            cnt++;
        }else if(s=="Never gonna say goodbye") {
            cnt++;
        }else if(s=="Never gonna tell a lie and hurt you") {
            cnt++;
        }else if(s=="Never gonna stop") {
            cnt++;
        }
    }
    if(n==cnt) {
        cout << "No";
    }else {
        cout << "Yes";
    }
    return 0;
}
