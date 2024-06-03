#include <iostream>

using namespace std;
int main(void){
    int t;
    cin >> t;
    getchar();
    for(int i=1;i<=t;i++){
        string s;
        getline(cin,s);
        cout << i << ". " << s << '\n';
    }
    return 0;
}