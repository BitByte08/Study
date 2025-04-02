#include <iostream>
#include <vector>
#include <algorithm>
int main(void) {
  std::vector<int> v;
  int n; std::cin >> n;
  for (int i=0;i<n;i++) {
    int temp; std::cin >> temp;
    v.push_back(temp);
  }
  std::sort(v.begin(), v.end());
  for (int i=0;i<v.size();i++) {
    std::cout << v[i] << '\n';
  }
  return 0;
}