#include <iostream>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr_size,t,a,b;
    cin >> arr_size >> t;
    int arr[arr_size];
    int i;
    arr[0]=0;
    for(i=1;i<=arr_size;i++) {
        cin >> arr[i];
    }
    for(i=2;i<=arr_size;i++) {
        arr[i]+=arr[i-1];
    }
    for(i=0;i<t;i++) {
        cin >> a >> b;
        cout << arr[b] - arr[a-1]<< '\n';
    }
    return 0;
}