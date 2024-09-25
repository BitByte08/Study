#include <iostream>
#include <vector>
using namespace std;
int main(void) {
  int n; cin >> n;
  vector<vector<int>> user;
  for(int i=0;i<n;i++) {
    vector<int> temp;
    for(int j=0;j<3;j++) {
      int temp2; cin >> temp2;
      temp.push_back(temp2);
    }
    user.push_back(temp);
  }
  int max_idx=0;
  for(int i=0;i<n;i++) {
    if(user[max_idx][0]<user[i][0]) {
      max_idx=i;
    }else if(user[max_idx][0]==user[i][0]) {
      if(user[max_idx][1]>user[i][1]) {
        max_idx=i;
      }else if(user[max_idx][1]==user[i][1]) {
        if(user[max_idx][2]>user[i][2]) {
          max_idx=i;
        }
      }
    }
  }
  cout << max_idx+1;
  return 0;
}