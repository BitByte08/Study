#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    int i,temp;
    arr[0]=0;
    for(i=1;i<=n;i++) {
        cin >> temp;
        arr[i]=arr[i-1]+temp;
    }
    int t,s,e;
    cin >> t;
    for(i=0;i<t;i++) {
        cin >> s >> e;
        cout << arr[e]-arr[s-1] << '\n';
    }
    return 0;
}