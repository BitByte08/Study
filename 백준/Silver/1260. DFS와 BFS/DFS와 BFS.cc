#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string.h>

using namespace std;

vector<int> v[1001];
queue<int> q;
bool visited[1001];
int N,M,V;

void dfs(int s){
    cout << s << ' ';
    visited[s]= true;
    for (int i = 0; i < v[s].size(); i++) {
        if (visited[v[s][i]] == 0) {
            dfs(v[s][i]);
        }
    }
}
void bfs(int s) {
    visited[s] = 1;
    q.push(s);
    while (!q.empty()) {
        int now = q.front();
        cout << now << ' ';
        q.pop();
        for (int i = 0; i < v[now].size(); i++) {
            if (visited[v[now][i]] == 0) {
                q.push(v[now][i]);
                visited[v[now][i]] = 1;
            }
        }
    }
}
int main(void){
    cin >> N >> M >> V;
    for(int i=0;i<M;i++){
        int a,b; cin >> a >> b;
        v[b].push_back(a);
        v[a].push_back(b);  
    }
    for(int i=1;i<=N;i++){
        sort(v[i].begin(),v[i].end());
    }
    dfs(V);
    cout << '\n';
    memset(visited,false,sizeof(visited));
    bfs(V);
    return 0;
}