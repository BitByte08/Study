#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  int n; cin >> n;
  vector<int> card;
  for (int i = 0; i < n; i++) {
    int temp; cin >> temp;
    card.push_back(temp);
  }
  sort(card.begin(), card.end(),greater<int>());
  int res = 0;
  for(int i=1;i<n;i++) {
    res += card[0] + card[i];
  }
  cout << res;
  return 0;
}