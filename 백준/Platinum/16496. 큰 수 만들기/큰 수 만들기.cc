#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 1001

string s[MAX];
bool cmp(string a, string b) {
    if(a==b) return false;
    string ab = a + b;
    string ba = b + a;
    if(ab > ba) return true;
    else return false;
}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int f = 0;
    for(int i=0;i<n;i++){
        cin >> s[i];
        if(s[i] != "0") f = 1;
    }
    if(f == 0) cout << "0";
    else {
        sort(s,s+n,cmp);
        for(int i=0;i<n;i++) cout << s[i];
    }
    return 0;
}
