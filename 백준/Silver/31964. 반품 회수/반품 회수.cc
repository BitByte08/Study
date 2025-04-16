#include <iostream>
#define MAX 3001
using namespace std;
int X[MAX], T[MAX];
int main(void) {
  int n; cin >> n;
  for (int i=0;i<n;i++) cin >> X[i];
  for (int i=0;i<n;i++) cin >> T[i];
  int sumT = max(X[n-1], T[n-1]);
  for (int i=n-2;i>=0;i--) {
    sumT += max(X[i+1] - X[i],T[i]-sumT);
  }
  cout << sumT+X[0] << endl;
  return 0;
}