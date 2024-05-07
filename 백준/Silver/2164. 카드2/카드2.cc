#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    queue<int> Q;
    cin >> n;
    int i;
    for(i=1;i<=n;i++){
        Q.push(i);
    }
    while(!Q.empty()&&Q.size()>1){
        Q.pop();
        Q.push(Q.front());
        Q.pop();
    }
    cout << Q.front();
    return 0;
}
