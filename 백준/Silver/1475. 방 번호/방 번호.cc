#include <iostream>
#include <vector>
using namespace std;
int main(void) {
  string s; cin >> s;
  vector v(10,0);
  for(auto c : s)v[atoi(&c)]++;
  v[6]=(v[6]+v[9]+1)/2; v[9]=0;
  int max=0;
  for(auto i : v)if(i>max)max=i;
  cout << max;
  return 0;
}