#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    int prime[119]={};
    int i,j;
    prime[0]=prime[1]=1;
    for(i=2;i<=118;i++){
        for(j=i*2;j<=118;j+=i){
            prime[j]=1;
        }
    }
    while(n--){
        int num;
        string ans = "No";
        cin >> num;
        for(i=2;i<=num;i++){
            for(j=2;j<=num;j++){
                if(i+j!=num)continue;
                if(!prime[i]&&!prime[j]){
                    ans = "Yes";
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}