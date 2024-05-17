#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(void){
    int n,res=0;
    set<string> s;
    string t;
    string t2;
    cin >> n;
    s.insert("ChongChong");
    for(int i=0;i<n;i++){
        s.insert("dummy");
        cin >> t >> t2;
        if(s.find(t)==s.end()&&s.find(t2)==s.end()){
            continue;
        }
        s.insert(t);
        s.insert(t2);
    }
    cout << s.size()-1;
    return 0;
}