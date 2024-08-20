#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int start,end; cin >> start >> end;
    vector<int> v;
    for(int i=1;v.size()<=end;i++) {
        for(int j=1;j<=i;j++) {
            v.push_back(i);
        }
    }
    int res=0;
    for(int i=start-1;i<end;i++)res+=v[i];
    cout << res;
    return 0;
}