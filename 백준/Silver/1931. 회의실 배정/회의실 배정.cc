#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<pair<int,int>> time;
    int t,s,e;

    cin >> t;
    for(int i=0;i<t;i++){
        cin >> s >> e;
        time.push_back(make_pair(s,e));
    }
    stable_sort(time.begin(),time.end());

    int res_start_time,res_end_time,res;
    res_start_time=res_end_time=res=0;
    
    for(int i=0;i<t;i++){
        int start_time=time[i].first;
        int end_time=time[i].second;
        
        if(end_time>=res_end_time){
            if(start_time>=res_end_time){
                res_end_time=end_time;
                res++;
            }
        }else{
            res_start_time = start_time;
            res_end_time = end_time;
        }
    }
    cout << res;
    return 0;
}