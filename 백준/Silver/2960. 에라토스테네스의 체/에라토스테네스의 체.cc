#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k,cnt=0,i,j;
    cin >> n >> k;
    int arr[1001]={};
    arr[0]=arr[1]=1;
    for(i=2;i<=n;i++){
        for(j=i;j<=n;j+=i){
            if(arr[j]!=1) {
                arr[j] = 1;
                cnt++;
                if (cnt == k) {
                    cout << j << '\n';
                    return 0;
                }
            }
        }
    }
    return 0;
}