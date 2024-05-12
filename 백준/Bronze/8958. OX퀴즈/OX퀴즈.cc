#include <iostream>

using namespace std;

int main(void){
    int t,i,j,k,temp=0,res=0;
    cin >> t;
    string s;
    for(i=0;i<t;i++){
        cin >> s;
        temp=res=0;
        for(j=0;j<s.size();j++) {
            if(s[j]=='O'){
                temp++;
            }else{
                for(k=1;k<=temp;k++){
                    res+=k;
                }
                temp=0;
            }
        }
        for(k=1;k<=temp;k++){
            res+=k;
        }
        cout << res << '\n';
    }
    return 0;
}