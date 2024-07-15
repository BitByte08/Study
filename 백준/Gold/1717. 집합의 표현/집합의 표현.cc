#include <iostream>
#include <vector>
#define MAX 1000001
using namespace std;
vector<int> parent(MAX);

int get_parent(int x){
    if(parent[x]==x) return x;
    return parent[x]= get_parent(parent[x]);
}
void union_find(int a, int b){
    a = get_parent(a);
    b = get_parent(b);
    if(a>b) parent[a] = b;
    else parent[b] = a;
}
void find_parent(int a, int b) {
    a = get_parent(a);
    b = get_parent(b);
    if (a == b) cout << "YES\n";
    else cout << "NO\n";
}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,m; cin >> n >> m;
    for(int i=1;i<=n;i++){
        parent[i]=i;
    }
    for(int i=0;i<m;i++){
        int t,a,b; cin >> t >> a >> b;
        if(!t){
            union_find(a,b);
        }else{
            find_parent(a,b);
        }
    }

    return 0;
}