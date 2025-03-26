#include <iostream>
#include <queue>
using namespace std;
int main(void) {
    int t; cin >> t;
    int maxlen=0,backst=0;
    queue<int> q;
    while (t--) {
        int n; cin >> n;
        if (n==1) {
            int m; cin >> m;
            q.push(m);
            if (q.size()>maxlen) {
                maxlen = q.size();
                backst = m;
            }else if (q.size()==maxlen) {
                backst = min(backst,m);
            }
        }else{
            q.pop();
        }
    }
    cout << maxlen << ' ' << backst;
    return 0;
}