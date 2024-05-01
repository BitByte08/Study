#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int t;
    cin >> t;
    int i;
    for(i=0;i<t;i++){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int size,start=0,end;
        cin >> size;
        end=size-1;
        int arr[size];
        for(int j=0;j<size;j++){
            cin >> arr[j];
        }
        sort(arr,arr+size);
        int t2;
        cin >> t2;
        for(i=0;i<t2;i++){
            start=0;
            end=size-1;
            int a,b=0;
            cin >> a;
            while(1){
                int idx=(start+end)/2;
                //cout << arr[idx] << ' ';
                if(arr[idx]==a){
                    b=1;
                    break;
                }else if(start>end){
                    break;
                }else if(arr[idx]<a){
                    start=idx+1;
                }else if(arr[idx]>a){
                    end=idx-1;
                }
            }
            cout << b << '\n';
        }
    }
    return 0;
}