#include <iostream>
#include <vector>
#include <algorithm>
#define Pair pair<int,pair<int,int>>
using namespace std;
int v[10001];
int find_parent(int x);
void union_parent(int x,int y);
int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int n,m; cin >> n >> m;
  vector<Pair> edges;
  for (int i=1;i<=n;i++) v[i]=i;
  for (int i=0;i<m;i++) {
    int a,b,cost; cin >> a >> b >> cost;
    edges.push_back({cost,{a,b}});
  }
  int res = 0;
  sort(edges.begin(),edges.end());
  for (Pair edge: edges) {
    pair<int,int> cost = edge.second;
    if (find_parent(cost.first)!=find_parent(cost.second)) {
      union_parent(cost.first,cost.second);
      res+=edge.first;
    }
  }
  cout << res;
  return 0;
}
int find_parent(int x) {
  if (v[x]!=x)v[x]=find_parent(v[x]);
  return v[x];
}
void union_parent(int x,int y) {
  x = find_parent(x);
  y = find_parent(y);
  if (x<y) {
    v[y]=x;
  }else {
    v[x]=y;
  }
}
