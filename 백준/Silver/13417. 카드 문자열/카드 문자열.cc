#include <iostream>
#include <deque>
using namespace std;
int main() {
  int t; cin >> t;
  while (t--) {
    deque<char> d;
    int n; cin >> n;
    for(int i=0;i<n;i++) {
      char temp; cin >> temp;
      if(d.empty()||d.front()>=temp) {
        d.push_front(temp);
      }else {
        d.push_back(temp);
      }
    }
    for(int i=0;i<d.size();i++) {
      cout << d[i];
    }
    cout << '\n';
  }
  return 0;
}