#include <iostream>
#include <queue>
using namespace std;
int main(void) {
    queue<int> qu;
    int n; cin >> n;
    while (n--) {
        string s; cin >> s;
        if (s=="push") {
            int n; cin >> n;
            qu.push(n);
        }else if (s=="pop") {
            if (qu.empty()) {
                cout << -1 << endl;
                continue;
            }
            cout << qu.front() << endl;
            qu.pop();
        }else if (s=="size") {
            cout << qu.size() << endl;
        }else if (s=="empty") {
            cout << qu.empty() << endl;
        }else if (s=="front") {
            if (qu.empty()) {
                cout << -1 << endl;
                continue;
            }
            cout << qu.front() << endl;
        }else if (s=="back") {
            if (qu.empty()) {
                cout << -1 << endl;
                continue;
            }
            cout << qu.back() << endl;
        }
    }
    return 0;
}