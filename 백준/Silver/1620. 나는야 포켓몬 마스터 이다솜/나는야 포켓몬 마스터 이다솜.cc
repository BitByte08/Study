#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main(void){
    map<string,int> num;
    vector<string> name;
    vector<string> res;
    int n,t,i;
    cin >> n >> t;
    for(i=1;i<=n;i++){
        string s;
        cin >> s;
        name.push_back(s);
        num.insert(make_pair(s,i));
    }
    for(i=0;i<t;i++){
        string s;
        cin >> s;
        if(isdigit(s[0])){
            res.push_back(name[stoi(s)-1]);
        }else{
            res.push_back(to_string(num[s]));
        }
    }
    for(i=0;i<res.size();i++){
        cout << res[i] << '\n';
    }
    return 0;
}