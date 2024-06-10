#include <iostream>
#include <cmath>

using namespace std;

int main(void){
    double n;
    int m,res=0;
    int i,j;
    cin >> n >> m;
    int k = floor(sqrt(n));

    bool prime[101] = {};
    prime[0]=prime[1]=true;
    for(i=2;i<=100;i++){
        for(j=i*2;j<=100;j+=i){
            prime[j]=true;
        }
    }
    for(j=1;j<=n;j++) {
        int num = j;
        int max = 0;
        for(i=2;i<=k;i++){
            if(num%i==0){
                num/=i;
                max = i;
                i--;
            }
        }
        if(num!=1){
            max = num;
        }
        if(max<=m){
            res++;
        }
    }
    cout << res;
    return 0;
}