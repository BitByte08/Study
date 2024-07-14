#include <iostream>
#include <vector>
#define MAX 100000001
#define MOD ((long long)1<<32)
using namespace std;

vector<bool> isprime(MAX);
vector<int> v;

void prime(int n){
    for(int i=2;i<=n;i++) isprime[i]=true;
    for(int i=2;i*i<=n;i++){
        if (!isprime[i]) continue;
        for (int j = i*i; j <= n; j += i) {
            isprime[j] = false;
        }
    }

}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    prime(n);
    long long res = 1;
    v.push_back(2);
    for(int i=3;i<=n;i+=2){
        if(isprime[i])v.push_back(i);
    }
    for(auto i : v){
        long long temp = i;
        while(temp*i<=n) temp*=i;
        res=(res*temp)%MOD;
    }
    cout << res;
}