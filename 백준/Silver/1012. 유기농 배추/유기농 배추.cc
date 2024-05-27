#include <iostream>
#include <cstring>
#include <vector>

using namespace std;
int n,m;
bool feld[51][51];
bool visited[51][51];
bool dfs(int y, int x) {
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};
    if (visited[y][x]) return false;
    
    visited[y][x] = true;

    for (int i = 0; i < 4; i++) {
        if (x+dx[i]>=0 &&y+dy[i]>= 0 && x+dx[i]<m&&y+dy[i]< n && feld[y+dy[i]][x+dx[i]])
            dfs(y+dy[i], x+dx[i]);
    }
    return true;
}
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,i,j;
    cin >> t;
    while(t--){
        int ca,res=0,x,y;
        cin >> m >> n >> ca;
        memset(feld, 0, sizeof(feld));
        memset(visited, 0, sizeof(visited));

        for(i=0;i<ca;i++){
            cin >> x >> y;
            feld[y][x] = 1;
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(feld[i][j]&&!visited[i][j])
                    if (dfs(i, j)) res++;
            }
        }
        cout << res << '\n';
    }
    return 0;
}