#include <iostream>
#include <vector>
using namespace std;
int main(void){
    vector<vector<int>> v(1001, vector<int>(3,0));
    vector<vector<int>> d(1001, vector<int>(3,0));
    int n; cin >> n;
    for (int i=1;i<=n;i++) {
        for (int j=0;j<3;j++) {
            cin >> v[i][j];
        }
    }
    for (int i=1;i<=n;i++) {
        d[i][0] = min(d[i-1][1],d[i-1][2]) + v[i][0];
        d[i][1] = min(d[i-1][0],d[i-1][2]) + v[i][1];
        d[i][2] = min(d[i-1][0],d[i-1][1]) + v[i][2];
    }
    cout << min(d[n][0],min(d[n][1],d[n][2])) << endl;

}