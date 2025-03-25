#include <iostream>
#include <stack>
using namespace std;
int main(void) {
    int n; cin >> n;
    getchar();
    for (int i=0;i<n;i++) {
        stack<string> s;
        string str; getline(cin, str);
        string temp = "";
        for (char i: str) {
            if (i!=' ') {
                temp += i;
            }else {
                s.push(temp);
                temp = "";
            }
        }
        s.push(temp);
        cout << "Case #" << i+1 << ":";
        while (!s.empty()) {
            cout << ' ' << s.top();
            s.pop();
        }
        cout << endl;
    }
    return 0;
}