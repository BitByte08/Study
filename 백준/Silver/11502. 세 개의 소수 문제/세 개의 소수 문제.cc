#include <iostream>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int i,j;
    bool prime[1001]={};
    prime[0]=prime[1]=true;

    for(i=2;i<=1000;i++){
        for(j=i*2;j<=1000;j+=i){
            prime[j]=true;
        }
    }


    int n;
    cin >> n;
    while(n--){
        int num,yes=0;
        cin >> num;
        for(i=2;i<=num;i++){
            for(j=2;j<=num;j++){
                for(int k=2;k<=num;k++){
                    if(i+j+k!=num) continue;
                    if(!prime[i]&&!prime[j]&&!prime[k]){
                        cout << i << ' ' << j << ' ' << k << '\n';
                        i=num+1;
                        yes=1;
                    }
                }
            }
        }
        if(!yes) cout << 0 << '\n';
    }

    return 0;
}