#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        vector<int> s;
        vector<int> b;
        int n,m; cin >> n >> m;
        for(int i=0;i<n;i++){
            int temp; cin >> temp;
            s.push_back(temp);
        }
        for(int i=0;i<m;i++){
            int temp; cin >> temp;
            b.push_back(temp);
        }
        sort(s.begin(), s.end(), greater<int>());
        sort(b.begin(), b.end(), greater<int>());
        for(;!s.empty()&&!b.empty();){
            if(s[s.size()-1]>=b[b.size()-1]){
                b.pop_back();
            }else{
                s.pop_back();
            }
        }
        if(!s.empty()){
            cout << 'S';
        }else{
            cout << 'B';
        }
        cout << '\n';
    }
    return 0;
}
