#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  priority_queue<int> left;
  priority_queue<int,vector<int>,greater<int>> right;
  int n; cin >> n;
  for(int i=0;i<n;i++) {
    int temp; cin >> temp;
    if(left.empty()){ left.push(temp);
    }else if(left.size() == right.size()) { left.push(temp);
    }else right.push(temp);
    if(!left.empty() && !right.empty()&&left.top()>right.top()) {
      int x=left.top(); int y=right.top();
      left.pop(); right.pop();
      left.push(y); right.push(x);
    } cout << left.top() << '\n';
  }
  return 0;
}