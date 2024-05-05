#include <iostream>
#include <deque>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,cmd;
    deque<int> D;
    cin >> n;
    int i;
    for(i=0;i<n;i++){
        cin >> cmd;
        if(cmd==1){
            int temp;
            cin >> temp;
            D.push_front(temp);
        }else if(cmd==2){
            int temp;
            cin >> temp;
            D.push_back(temp);
        }else if(cmd==3&&!D.empty()){
            cout << D.front() << '\n';
            D.pop_front();
        }else if(cmd==4&&!D.empty()){
            cout << D.back() << '\n';
            D.pop_back();
        }else if(cmd==5){
            cout << D.size() <<'\n';
        }else if(cmd==6){
            cout << D.empty() << '\n';
        }else if(cmd==7&&!D.empty()){
            cout << D.front() << '\n';
        }else if(cmd==8&&!D.empty()){
            cout << D.back() << '\n';
        }else {
            cout << -1 << '\n';
        }
    }
    return 0;
}
