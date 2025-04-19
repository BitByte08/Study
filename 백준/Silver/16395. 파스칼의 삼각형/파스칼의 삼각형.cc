#include <iostream>
using namespace std;
int nCr[31][31];
int main(void) {
  for (int i=0;i<=30;i++) {
    nCr[i][0]= 1;
  }
  for (int i=1;i<=30;i++) {
    for (int j=1;j<=i;j++) {
      nCr[i][j] = nCr[i-1][j-1]+ nCr[i-1][j];
    }
  }
  int n,k; cin >> n >> k;
  cout << nCr[n-1][k-1] << endl;
  return 0;
}