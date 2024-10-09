#include <iostream>
#include <stack>
/*
1 X: 정수 X를 스택에 넣는다. (1 ≤ X ≤ 100,000)
2: 스택에 정수가 있다면 맨 위의 정수를 빼고 출력한다. 없다면 -1을 대신 출력한다.
3: 스택에 들어있는 정수의 개수를 출력한다.
4: 스택이 비어있으면 1, 아니면 0을 출력한다.
5: 스택에 정수가 있다면 맨 위의 정수를 출력한다. 없다면 -1을 대신 출력한다.
 */
using namespace std;
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int t; cin >> t;
  stack<int> st;
  for(int i=0;i<t;i++){
    int n; cin >> n;
    if(n==1) {
      int temp; cin >> temp;
      st.push(temp);
    }else if(n==2) {
      if(st.empty()) cout << -1 << '\n';
      else {cout << st.top() << '\n'; st.pop();}
    }else if(n==3) {
      cout << st.size() << '\n';
    }else if(n==4) {
      cout << st.empty() << '\n';
    }else if(n==5) {
      if(st.empty()) cout << -1 << '\n';
      else {cout << st.top() << '\n';}
    }
  }
  return 0;
}