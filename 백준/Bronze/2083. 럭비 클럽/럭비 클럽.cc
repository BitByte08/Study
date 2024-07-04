#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    while(1){
        string s; cin >> s;
        int age,weight; cin >> age >> weight;
        if(s=="#"&&age==0&&age==weight){
            return 0;
        }
        cout << s << ' ';
        if(age>17||weight>=80){
            cout << "Senior\n";
        }else{
            cout << "Junior\n";
        }
    }
    return 0;
}