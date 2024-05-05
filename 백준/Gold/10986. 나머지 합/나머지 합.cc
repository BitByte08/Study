#include <iostream>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    long long int num=0,res=0;
    cin >> n >> m;
    long long int arr[1001]={};
    int i,temp;
    arr[0]=0;
    for(i=1;i<=n;i++) {
        cin >> temp;
        num+=temp;
        arr[num%m]++;
    }
    for(i=0;i<=m;i++) {
		res+=arr[i]*(arr[i]-1)/2;
    }
    cout << arr[0]+res;
    return 0;
}