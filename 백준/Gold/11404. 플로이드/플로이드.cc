#include <iostream>
#include <vector>
#define INF (1 << 30)-1
using namespace std;
vector<vector<int>> v(101, vector<int>(101,0));
int main(void){
    int n,m; cin >> n >> m;

    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            v[i][j] = INF;

    for(int i=1;i<=n;i++)
        v[i][i] = 0;

    for(int i=0;i<m;i++){
        int a,b,c; cin >> a >> b >> c;
        if(v[a][b]>c)
            v[a][b] = c;
    }
    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                if(v[i][j]>v[i][k]+v[k][j])
                    v[i][j] = v[i][k]+v[k][j];

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            if(v[i][j]==INF) cout << 0 << ' ';
            else cout << v[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}