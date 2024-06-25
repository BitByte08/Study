#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(void){
    int n; cin >> n;
    vector<bool> pc(101,false);
    int res=0;
    for(int i=0;i<n;i++){
        int t; cin >> t;
        if(pc[t]){
            res++;
            continue;
        }
        pc[t]=true;
    }
    cout << res;
    return 0;
}

