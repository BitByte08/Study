#include <iostream>
#include <vector>
#include <queue>
using namespace std;
pair<int, int> d[4] = {{0,1}, {1,0}, {0,-1}, {-1, 0}};
int main(void) {
    int t; cin >> t;
    while (t--) {
        int m,n,k; cin >> m >> n >> k;
        int v[55][55];
        for (int i=0;i<k;i++) {
            int a,b; cin >> a >> b;
            v[a][b] = true;
        }
        int res = 0;
        for (int i=0;i<m;i++) for (int j=0;j<n;j++) {
            if (v[i][j]) {
                queue<pair<int,int>> q;
                q.push({i,j});
                while (!q.empty()) {
                    pair<int,int> p = q.front(); q.pop();
                    v[p.first][p.second] = false;
                    for (auto x: d) {
                        int nowx = p.first + x.first;
                        int nowy = p.second + x.second;
                        if (v[nowx][nowy] && nowx >= 0 && nowx < m && nowy >= 0 && nowy < n) {
                            q.push({nowx, nowy});
                            v[nowx][nowy] = false;
                        }
                    }
                }
                res++;
            }
        }
        cout << res << '\n';
    }
    return 0;
}