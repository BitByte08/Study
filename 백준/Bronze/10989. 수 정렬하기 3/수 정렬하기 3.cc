#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector<int> v(10001);
    for(int i=0;i<n;i++){
        int temp; cin >> temp;
        v[temp]++;
    }
    for(int i=0;i<10001;i++){
        for(int j=0;j<v[i];j++){
            cout << i << '\n';
        }
    }
}