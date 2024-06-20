#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>

#define MOD 1000000000ll

using namespace std;

long long gcd(long long a,long long b){
    return a%b?gcd(b,a%b):b;
}

int main(void){
    vector<int> n,m;
    bool over=false;
    int t; cin >> t;
    while(t--){
        int temp; cin >> temp;
        n.push_back(temp);
    }
    cin >> t;
    while(t--){
        int temp; cin >> temp;
        m.push_back(temp);
    }
    long long res=1;
    for(int i=0;i<n.size();i++){
        for(int j=0;j<m.size();j++){
            long long g;
            if(n[i]>m[j]) g = gcd(n[i],m[j]);
            else g = gcd(m[j],n[i]);
            res*=g;
            n[i]/=g;
            m[j]/=g;
            if(res>=MOD){
                res%=MOD;
                over= true;
            }
        }
    }
    if(over) printf("%09d",res);
    else cout << res;
    return 0;
}

