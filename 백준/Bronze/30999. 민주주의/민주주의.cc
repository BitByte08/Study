#include <iostream>
using namespace std;
int main(void) {
    int n,m,res=0; cin >> n >> m;
    while (n--){
        string s; cin >> s;
        int cnt = 0;
        for (char c : s) if (c == 'O') cnt++;
        if (cnt * 2 > m) res++;
    }
    cout << res;
}