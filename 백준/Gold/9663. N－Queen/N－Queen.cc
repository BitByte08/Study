#include <iostream>
#include <vector>
#define MAX 15
using namespace std;
vector v(MAX,0);

bool check(int level){
  for(int i = 0; i < level; i++)
    if(v[i]==v[level]||abs(v[level]-v[i])==level - i) return false;
  return true;
}

int nqueen(int x,int n){
  static int total=0;
  if(x == n) total++;
  else{
    for(int i = 0; i < n; i++){
      v[x] = i;
      if(check(x)) nqueen(x+1,n);
    }
  }
  return total;
}
int main(void) {
  int n; cin >> n;
  cout << nqueen(0,n);
  return 0;
}