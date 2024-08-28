#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  int n; cin >> n;
  int start=0,end=n-1;
  vector<int> v;
  for(int i=0;i<n;i++) {
    int temp; cin >> temp;
    v.push_back(temp);
  }
  int res=abs(v[start]+v[end]);
  int resstart = v[start];
  int resend = v[end];
  while(start<end) {
    int temp = v[start]+v[end];
    if(abs(temp)<res) {
      res = abs(temp);
      resstart = v[start];
      resend = v[end];
    }
    if(temp<0) {
      start++;
    }else{
      end--;
    }
  }
  cout << resstart << ' ' << resend << endl;
  return 0;
}