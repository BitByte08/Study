#include <iostream>
using namespace std;
int main(void){
    int temp = 0, ans = 0;
    int a,b,c,d; cin >> a >> b >> c >> d;
    int n = 24;
    while(n--){
        if(temp+a<=d){ 
            ans+=b;
            temp+=a;
        }
        else{
            temp-=c;
            if(temp<0) temp=0;
        }
    }

    cout << ans;

}