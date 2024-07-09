#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

vector<int> v[1001];
bool visited[1001];
int work[1001];

bool dfs(int n){
    if(visited[n]) return false;
    visited[n]=true;
    for(auto next:v[n]){
        if(!work[next]||dfs(work[next])){
            work[next] = n;
            return true;
        }
    }
    return false;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m; cin >> n >> m;
    for(int i=1;i<=n;i++){
        int o; cin >> o;
        for(int j=0;j<o;j++){
            int temp; cin >> temp;
            v[i].push_back(temp);
        }
    }
    int res=0;
    for(int i=1; i<=n;i++){
        memset(visited,false,sizeof(visited));
        if(dfs(i))res++;
    }
    cout << res;
    return 0;
}