#include <iostream>
#include <algorithm>

using namespace std;

int f(int arr[],int start, int end, int a){
    int idx=(end+start)/2;
    if(start>end){
        return 0;
    }
    if(arr[idx]<a){
        return f(arr,idx+1,end,a);
    }
    if(arr[idx]>a){
        return f(arr,start,idx-1,a);
    }
    if(arr[idx]==a) {
        return 1;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int size;
    cin >> size;
    int i;
    int arr[size];
    for(i=0;i<size;i++){
        cin >> arr[i];
    }
    sort(arr,arr+size);
    int t;
    cin >> t;
    for(i=0;i<t;i++){
        int a;
        cin >> a;
        cout << f(arr,0,size-1,a) << '\n';
    }
    return 0;
}
