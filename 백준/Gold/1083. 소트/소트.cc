#include <iostream>

using namespace std;

int main(void){
    int n;
    cin >> n;
    int arr[n];
    int i,j;
    for(i=0;i<n;i++){
        cin >> arr[i];
    }

    int cnt,max, max_idx;
    int a;
    cin >> a;
    for(i=0;i<n-1&&a!=0;i++){
        cnt=0;
        max = arr[i];
        max_idx = i;
        for(j=i+1;j<n&&cnt<a;j++){
            if(max < arr[j]){
                max=arr[j];
                max_idx=j;
            }
            cnt++;
        }
        j=max_idx;
        if(max_idx>i){
            while(j!=i){
                int temp = arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                j--;
            }
        }
        a-=(max_idx-i);
    }
    for(i=0;i<n;i++){
        cout << arr[i] << ' ';
    }
    return 0;
}