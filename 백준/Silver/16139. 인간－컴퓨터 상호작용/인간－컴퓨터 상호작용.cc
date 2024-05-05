#include <iostream>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int alpha[27][200001];
    alpha[s[0]-'a'][0]=1;
    int i,j;
    for(i=1;i<s.size();i++) {
        for(j=0;j<27;j++) {
            alpha[j][i]=alpha[j][i-1];
        }
        alpha[s[i]-'a'][i]++;
    }
    int t;
    cin >> t;
    char a;
    int b,c;
    for(i=0;i<t;i++) {
        cin >> a >> b >> c;
        if(b==0) {
            cout << alpha[a-'a'][c] << '\n';
            continue;
        }
        cout << alpha[a-'a'][c]-alpha[a-'a'][b-1] << '\n';
    }
    return 0;
}