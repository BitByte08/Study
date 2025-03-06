#include <iostream>
#include <vector>

#define ll long long

using namespace std;
int main(void){
  int n; cin >> n;
  vector<ll> v(n,0);
  for (int i=0;i<n;i++) cin >> v[i];
  ll temp = 0;
  ll sum = temp;
  for (int i=v.size()-1; i>=0; i--) {
    if (temp < v[i]){
      temp++;
      sum += temp;
    }else {
      temp = v[i];
      sum += v[i];
    }
  }
  cout << sum;
  return 0;
}