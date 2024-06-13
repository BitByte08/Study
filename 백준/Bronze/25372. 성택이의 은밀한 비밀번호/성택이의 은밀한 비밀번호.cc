#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        if (s.size() >= 6 && s.size() <= 9) cout << "yes";
        else cout << "no";
        cout << '\n';
    }
    return 0;
}