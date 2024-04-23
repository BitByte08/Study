#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    string a;
    cin>>a;
    sort(a.begin(),a.end(),greater<int>());
    cout<<a;
    return 0;
}
