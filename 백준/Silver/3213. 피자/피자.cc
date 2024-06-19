#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

int main(void){
    int a,b,t,res=0;
    vector<int> v;
    cin >> t;
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);

    for(int i=0;i<t;i++){
        scanf("%d/%d",&a,&b);
        if(a==1){
            if(b==2){//1/2
                v[1]++;
            }else{//1/4
                v[2]++;
            }
        }else{//3/4
            v[0]++;
        }
    }
    res = v[1]/2;
    v[1]-=res*2;

    int res2 = min(v[0],v[2]);
    v[0]-=res2;
    v[2]-=res2;
    res+=res2;

    res2 = min(v[1],v[2]);
    v[1]-=res2;
    v[2]-=res2;
    res+=res2;

    res2=v[2]/4;
    res+=res2;
    v[2]-=res2*4;

    if(v[2]){
        res++;
    }
    res+=(v[0]+v[1]);
    cout << res;
    return 0;
}