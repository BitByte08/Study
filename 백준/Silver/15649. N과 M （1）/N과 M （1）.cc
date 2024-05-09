#include <iostream>

using namespace std;

int visited[9]={};
int arr[9]={};
void dfs(int n, int m, int cnt);
int main(void){
    int n,m;
    cin >> n >> m;
    dfs(n,m,0);
    return 0;
}
void dfs(int n, int m, int cnt){
    if(cnt==m){
        for(int i=0;i<m;i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }else{
        for(int i=1;i<=n;i++){
            if(visited[i]==0){
                visited[i]=1;
                arr[cnt]=i;
                dfs(n,m,cnt+1);
                visited[i]=0;
            }
        }
    }
}