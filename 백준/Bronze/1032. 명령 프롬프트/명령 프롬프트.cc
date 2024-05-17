#include <iostream>
#include <string>

using namespace std;

int main(void){
    string result;
    string s;
    int i,t;
    cin >> t;
    cin >> result;
    for(i=0;i<t-1;i++){
        cin >> s;
        for(int j=0;j<result.size();j++){
            if(result[j]!=s[j]){
                result[j]='?';
            }
        }
    }
    cout << result;

    return 0;
}