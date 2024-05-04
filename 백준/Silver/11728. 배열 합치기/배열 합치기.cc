#include <iostream>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr1[1000001]={};
    int arr2[1000001]={};
    int t1,t2,i,j,a;
    cin >> t1 >> t2;
    for(i=0;i<t1;i++) {
        cin >> arr1[i];
    }
    for(i=0;i<t2;i++) {
        cin >> arr2[i];
    }
    i=j=0;
    while(i<t1&&j<t2) {
        if(arr1[i]<arr2[j]) {
            cout << arr1[i++] << ' ';
        }else {
            cout << arr2[j++] << ' ';
        }
    }
    while(i<t1) {
        cout << arr1[i++]<< ' ';
    }
    while(j<t2) {
        cout << arr2[j++]<< ' ';
    }
    return 0;
}