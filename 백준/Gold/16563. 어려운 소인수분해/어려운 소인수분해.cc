#include <iostream>
#include <vector>
#define max 5000001
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int prime[max]={};
    for(int i=2;i<max;i++){
        prime[i]=i;
    }
    for(int i=2;i*i<max;i++){
        if(prime[i]==i) {
            for (int j =i*i;j<max;j+=i){
                if(prime[j]==j){
                    prime[j]=i;
                }
            }
        }
    }
    int n;
    cin >> n;
    while(n--){
        int num;
        cin >> num;
        while(num>1){
            cout << prime[num] << ' ';
            num/=prime[num];
        }
        cout << '\n';
    }
    return 0;
}