#include <iostream>
using namespace std;
int main() {
  string strck;
  int ck=0,n; cin >> n;
  for(int i=666;;i++) {
    strck = to_string(i);
    if(strck.find("666")!=-1) {
      ck++;
      if(ck==n) { cout << strck; return 0; }
    }
  }
  return 0;
}