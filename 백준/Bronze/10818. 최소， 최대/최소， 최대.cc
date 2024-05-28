#include <iostream>

using namespace std;

int main(){
    long long int i,n,max=-1000000,min=1000000,res;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> res;
        if(res>max){
            max = res;
        }
        if(res<min){
            min = res;
        }
    }
    cout << min << ' ' << max;
    return 0;
}