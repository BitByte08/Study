#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={};
    for(int t=0;t<2;t++){
        for(int i=0;i<5;i++) cin >> arr[i];
        cout << arr[0] * 6 + arr[1] * 3 + arr[2] * 2 + arr[3] + arr[4] * 2 << ' ';
    }
}