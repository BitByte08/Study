#include <iostream>
#include <algorithm>
using namespace std;
bool visited[9];
int arr[9];
int num[9];
int N,M;
void dfs(int m) {
    if(m==M) {
        for(int i=0;i<M;i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i=0;i<N;i++) {
        if(!visited[i]) {
            arr[m]=num[i];
            visited[i]=true;
            dfs(m+1);
            visited[i]=false;
        }
    }
}
int main(void) {
    cin >> N >> M;
    for(int i=0;i<N;i++) {
        cin >> num[i];
    }
    sort(num,num+N);
    dfs(0);
    return 0;
}