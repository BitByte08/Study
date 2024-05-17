#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(void){
    int n,res=0;
    set<string> s;
    string t;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> t;
        if(t=="ENTER"){
            res+=s.size();
            s.clear();
        }else {
            s.insert(t);
        }
    }
    cout << (res + s.size());
    return 0;
}