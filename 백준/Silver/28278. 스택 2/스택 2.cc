#include <iostream>
#include <stack>
#include <string>
using namespace std;

/*
push X: 정수 X를 스택에 넣는 연산이다.
pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 스택에 들어있는 정수의 개수를 출력한다.
empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
*/

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    stack<int> s;
    int cmd;
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> cmd;
        int b;
        if (cmd == 1) {
            cin >> b;
            s.push(b);
        } else if (cmd == 2) {
            if(s.empty()==0){
                cout << s.top() << '\n';
                s.pop();
            }else{
                cout << -1 << '\n';
            }
        } else if (cmd == 4) {
            cout << s.empty() << '\n';
        } else if (cmd == 3) {
            cout << s.size() << '\n';
        } else if (cmd == 5) {
            if(s.empty()==0){
                cout << s.top() << '\n';
            }else{
                cout << -1 << '\n';
            }
        }
    }
    return 0;
}