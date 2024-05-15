#include <iostream>
#include <string>

using namespace std;

int main(void){
    string s;
    cin >> s;
    int arr[2]={};
    int i;
    arr[s[0]-'0']++;
    char is = s[0];
    for(i=0;i<s.size();i++){
        if(is!=s[i]){
            arr[s[i]-'0']++;
            is=s[i];
        }
    }
    cout << (arr[1] > arr[0] ? arr[0] : arr[1]);
    return 0;
}