#include <iostream>
#include <vector>

using namespace std;

int main(void){
    vector<vector<int>> A;
    vector<vector<int>> B;
    int C[101][101]={};
    int n,m; cin >> n >> m;
    for(int i=0;i<n;i++){
        vector<int> tv;
        for(int j=0;j<m;j++){
            int temp; cin >> temp;
            tv.push_back(temp);
        }
        A.push_back(tv);
    }
    cin >> n >> m;
    for(int i=0;i<n;i++){
        vector<int> tv;
        for(int j=0;j<m;j++) {
            int temp; cin >> temp;
            tv.push_back(temp);
        }
        B.push_back(tv);
    }
    for(int i=0;i<A.size();i++){
        for(int j=0;j<B[0].size();j++){
            for(int k=0;k<B.size();k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    for(int i=0;i<A.size();i++){
        for(int j=0;j<B[0].size();j++){
            cout << C[i][j] << ' ';
        }
        cout << '\n';
    }


    return 0;
}