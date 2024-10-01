#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> c(1001,vector<int>(1001,0));
vector<vector<int>> v(1001,vector<int>(5,0));
int main() {
  int n; cin >> n;
  for(int i=0;i<n;i++)for(int j=0;j<5;j++) cin >> v[i][j];
  for(int i=0;i<5;i++) {
    for(int j=0;j<n-1;j++) {
      for(int k=j+1;k<n;k++) {
        if(v[j][i]==v[k][i]) {
          c[j][k]=c[k][j]=1;
        }
      }
    }
  }
  int res=-1;
  int pcnt=-1;
  for(int i=0;i<n;i++) {
    int cnt=0;
    for(int j=0;j<n;j++) {
      if(c[i][j])cnt++;
      if(cnt>pcnt) {
        res=i+1;
        pcnt=cnt;
      }
    }
  }
  cout << res;
  return 0;
}