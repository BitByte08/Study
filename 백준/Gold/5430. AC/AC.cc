#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int main() {


    int t; cin >> t;
    while(t--){
        deque<int> d;
        string cmd; cin >> cmd;
        int size; cin >> size;
        string arr; cin >> arr;
        string temp="";
        bool r=false,error=false;
        for(int i=0;i<arr.size();i++){
            if(isdigit(arr[i])){
                temp+=arr[i];
            }else{
                if(!temp.empty()){
                    d.push_back(stoi(temp));
                    temp="";
                }
            }
        }

        for(auto i:cmd){
            if(i=='R'){
                r=!r;
            }
            else{
                if(d.empty()){
                    cout << "error\n";
                    error= true;
                    break;
                }
                if(r){
                    d.pop_back();
                }else{
                    d.pop_front();
                }
            }
        }
        if(!error){
            cout << '[';
            int i;
            if(r){
                for (auto o = d.rbegin(); o != d.rend(); o++) {
                    if (o == d.rend() - 1)
                        cout << *o;
                    else
                        cout << *o << ',';
                }
            }else{
                for (auto o = d.begin(); o != d.end(); o++) {
                    if (o == d.end() - 1)
                        cout << *o;
                    else
                        cout << *o << ',';
                }
            }
            cout << "]\n";
        }
    }

    return 0;
}