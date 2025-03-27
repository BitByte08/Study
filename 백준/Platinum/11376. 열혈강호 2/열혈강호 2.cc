#include <iostream>
#include <vector>
using namespace std;
vector<int> v[1001];
vector<bool> visited(1001,false);
vector<int> room(1001,0);
bool dfs(int n) {
    for (int i=0;i<v[n].size();i++) {
        int y = v[n][i];
        if (visited[y]) continue;
        visited[y] = true;
        if (room[y]==0 || dfs(room[y])) {
            room[y] = n;
            return true;
        }
    }
    return false;
}

int main(void) {
    int n,m,res=0; cin >> n >> m;
    for (int i=1;i<=n;i++) {
        int x; cin >> x;
        for (int j=0;j<x;j++) {
            int y; cin >> y;
            v[i].push_back(y);
        }
    }
    for (int i=1;i<=n;i++) {
        if (dfs(i)) res++;
        fill(visited.begin(),visited.end(),false);
    }
    for (int i=1;i<=n;i++) {
        if (dfs(i)) res++;
        fill(visited.begin(),visited.end(),false);
    }
    cout << res;
    return 0;
}