#include <iostream>
#include <string>

using namespace std;

int sum(int n){
    int ret=n;
    for(int i=0;n>=10;i++){
        ret+=n%10;
        n/=10;
    }
    return ret+n%10;
}
int main(void){
    int i,n;
    int arr[1000001]={};
    for(i=0;i<=1000000;i++){
        int temp = sum(i);
        if(temp>1000000){
            break;
        }
        if(arr[temp]==0) {
            arr[temp] = i;
        }
    }
    cin >> n;
    cout << arr[n];
    return 0;
}