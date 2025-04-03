#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int h,w; cin >> h >> w;
    int sum = 0;
    vector<int> v(w,0);
    for (int i=0;i<w;i++) cin >> v[i];
    for (int i=1;i<w-1;i++) {
        int left=0,right=0;
        for (int j=0;j<i;j++) {
            left = max(left,v[j]);
        }
        for (int j=i+1;j<w;j++) {
            right = max(right,v[j]);
        }
        sum += max(min(left,right) - v[i],0);
    }
    cout << sum;
    return 0;
}