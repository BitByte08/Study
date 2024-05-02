#include <iostream>

using namespace std;

int main(void){
    int a,b;
    cin >> a >> b;
    int i,j;
    int arr[a];
    for(i=0;i<a;i++){
        cin >> arr[i];
    }
    int cnt=0;
    int x,y;
    x=y=0;
    for(i=0;i<a;i++){
        for(j=0;j<a-1;j++){
            if(arr[j]>arr[j+1]){
                if(cnt==b-1){
                    x=arr[j];
                    y=arr[j+1];
                }
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                cnt++;
            }
        }
    }
    if(cnt>=b) {
        cout << y << ' ' << x;
    }else{
        cout << -1;
    }
    return 0;
}