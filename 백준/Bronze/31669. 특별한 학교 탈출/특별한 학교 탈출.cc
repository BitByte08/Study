#include <iostream>
#include <vector>

using namespace std;

int main(void){
    vector<string> v;
    int t,m; cin >> t >> m;
    for(int i=0;i<t;i++){
        string temp; cin >> temp;
        v.push_back(temp);
    }
    for(int i=0;i<m;i++){
        bool escape=true;
        for(int j=0;j<t;j++){
            if(v[j][i]=='O'){
                escape = false;
            }
        }
        if(escape){
            cout << i+1;
            return 0;
        }
    }
    cout << "ESCAPE FAILED";
    return 0;
}

