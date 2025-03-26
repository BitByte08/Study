#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> visited(55,vector<int>(55,0));
vector<vector<int>> matrix(55,vector<int>(55,0));
int w,h;
pair<int,int> d[4] = {{0,1},{1,0},{0,-1},{-1,0}};
void bfs(int x, int y) {
    queue<pair<int,int>> q;
    q.push(make_pair(x,y));
    while(!q.empty()) {
        pair<int,int> p = q.front();
        q.pop();
        visited[p.first][p.second] = 1;
        for (auto dp: d) {
            int nx = p.first+dp.first;
            int ny = p.second+dp.second;
            if(nx>=0 && nx<w && ny>=0 && ny<h && !visited[nx][ny] && matrix[nx][ny]) {
                q.push(make_pair(nx,ny));
                visited[nx][ny] = 1;
            }
        }
    }
}

int main(void) {
    int t; cin >> t;
    while (t--) {
        int n,res=0; cin >> h >> w >> n;
        fill(visited.begin(),visited.end(),vector<int>(55,0));
        fill(matrix.begin(),matrix.end(),vector<int>(55,0));
        for (int i=0;i<n;i++) {
            int x,y; cin >> x >> y;
            matrix[y][x] = 1;
        }
        for (int i=0;i<w;i++) {
            for (int j=0;j<h;j++) {
                if (matrix[i][j]&&!visited[i][j]) {
                    bfs(i,j);
                    res += 1;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}