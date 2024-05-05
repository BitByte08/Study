#include <iostream>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr_size,day,res=-100001;
    cin >> arr_size >> day;
    int temp[100001];
    int i;
    temp[0]=0;
    for(i=1;i<=arr_size;i++) {
        int a;
        cin >> a;
        temp[i]=temp[i-1]+a;
    }
    for(i=day;i<=arr_size;i++) {
        res=max(res,(temp[i]-temp[i-day]));
    }
    cout << res;
    return 0;
}