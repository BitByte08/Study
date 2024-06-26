#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void){
    int n; cin >> n;
    if(n==0){
        cout << 0;
        return 0;
    }
    vector<double> v;
    for(int i=0;i<n;i++){
        double temp; cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    double size=v.size();
    double num=round(size*0.15);
    double resize=size-num*2;
    double res=0;
    for(int i=num;i<size-num;i++) {
        res += v[i];
    }
    res = round(res/resize);
    cout << res;
    return 0;
}

