#include <iostream>
#include <vector>

using namespace std;

int l_node=0,re;
int dfs(vector<int>grape[],int current){
    if(current==re){
        return -1;
    }
    if(grape[current].empty()){
        l_node++;
        return 1;
    }
    for(int node:grape[current]){
        int temp = dfs(grape,node);
        if(temp==-1&&grape[current].size()==1){
            l_node++;
        }
    }
    return 0;

}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N,root;
    cin >> N;
    vector<int>grape[51];
    int i,node;
    for(i=0;i<N;i++){
        cin >> node;
        if(node==-1){
            root=i;
            continue;
        }
        grape[node].push_back(i);
    }
    cin >> re;
    dfs(grape,root);
    cout << l_node;
    return 0;
}