#include <iostream>
#include <vector>
#include <algorithm>
#define PAIR pair<int,pair<int, int>>
using namespace std;


vector<int> parent;
int union_find(int n){
    if(parent[n]==n) return n;
    return parent[n] = union_find(parent[n]);
}
void union_root(int x, int y){
    x = union_find(x);
    y = union_find(y);
    if(x!=y) parent[y] = x;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    vector<PAIR> e_list;
    vector<PAIR> res;
    int v,e; cin >> v >> e;
    int re = 0;
    parent.resize(v+1,0);
    for(int i=1;i<=v;i++) parent[i] = i;
    for(int i=0;i<e;i++){
        int a,b,c; cin >> a >> b >> c;
        e_list.push_back({c,{a,b}});
    }
    sort(e_list.begin(),e_list.end());
    for(PAIR p: e_list){
        int a = p.second.first;
        int b = p.second.second;

        if(union_find(a)==union_find(b)) continue;
        res.push_back(p);
        re += p.first;
        union_root(a,b);
        if(res.size() == v-1) break;
    }
    cout << re;
    return 0;
}