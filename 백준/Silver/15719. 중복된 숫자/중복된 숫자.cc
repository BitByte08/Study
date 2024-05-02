#include <iostream>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int arr[9999999]={};
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        if(arr[a]==1){
            cout << a;
            break;
        }
        arr[a] = 1;
        
    }
    return 0;
}