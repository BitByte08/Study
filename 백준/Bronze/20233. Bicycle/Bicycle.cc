#include <bits/stdc++.h>
using namespace std;
int main(void){
    int a,b,c,d,e,temp1,temp2; cin >> a >> b >> c >> d >> e;
    if(e > 30) temp1 = a + (e - 30) * b * 21;
    else temp1 = a;
    if(e > 45) temp2 = c + (e - 45) * d * 21;
    else temp2 = c;
    cout << temp1 << ' ' << temp2;
}