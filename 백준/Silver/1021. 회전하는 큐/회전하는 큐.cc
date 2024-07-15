#include <iostream>
#include <deque>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    deque<int> d;
    int n,m;cin >> n >> m;
    for(int i=1;i<=n;i++){
        d.push_back(i);
    }
    int cnt=0;
    while(m--){
        int n;cin >> n;
        int idx=0;
        for(int i=0;i<d.size();i++){
            if(d[i]==n){
                idx=i;
                break;
            }
        }
        if(idx<d.size()-idx){
            while(1){
                if(d.front()==n){
                    d.pop_front();
                    break;
                }
                cnt++;
                d.push_back(d.front());
                d.pop_front();
            }
        }else{
            while(1){
                if(d.front()==n){
                    d.pop_front();
                    break;
                }
                cnt++;
                d.push_front(d.back());
                d.pop_back();
            }
        }
    }
    cout << cnt;
}