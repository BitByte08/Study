#include <iostream>
#include <vector>
#include <queue>

using namespace std;



vector<int> v[101];
queue<int> q;
int res[101][101]={};
void bfs(int start){
    int arr[101]={};
    q.push(start);
    arr[start]=1;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i=0;i<v[x].size();i++){
            int idx = v[x][i];
            if(!arr[idx]){
                arr[idx]=1;
                q.push(idx);
                res[idx][start]=res[x][start]+1;
                res[start][idx]=res[start][x]+1;
            }
        }
    }
}

int main(void){
    int n,m,min=2000000000; cin >> n >> m;
    for(int i=0;i<m;i++){
        int x,y;cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        bfs(i);
    }
    int result=0;
    for(int i=1; i<=n; i++){
        int sum=0;
        for(int j=1; j<=n; j++){
            sum+=res[i][j];
        }
        if(min > sum){
            min = sum;
            result = i;
        }
    }

    cout << result << "\n";
    return 0;
}