#include <iostream>
using namespace std;
int main(void){
    int a,b,c,d; cin >> a >> b >> c >> d;
    cout << (a+c==b+d?"Either":(a+c<b+d?"Hanyang Univ.":"Yongdap"));
    return 0;
}