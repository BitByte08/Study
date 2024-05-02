#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    int arr[11]={};
    cin >> t;
    int i;
    for (i=0;i<t;i++){
        for(int j=0;j<10;j++) {
            cin >> arr[j];
        }
        sort(arr,arr+10);
        cout << arr[7] << '\n';
    }
    return 0;
}