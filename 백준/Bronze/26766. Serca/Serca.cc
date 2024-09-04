#include <iostream>
using namespace std;
int main(void){
    string s = " @@@   @@@ \n@   @ @   @\n@    @    @\n@         @\n @       @ \n  @     @  \n   @   @   \n    @ @    \n     @     \n";
    int n; cin >> n;
    for(int i=0;i<n;i++){
        cout << s;
    }
    return 0;
}