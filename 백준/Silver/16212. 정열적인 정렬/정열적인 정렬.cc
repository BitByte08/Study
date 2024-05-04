#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);

    for(i=0;i<n;i++){
        cout << arr[i] << ' ';
    }
    return 0;
}