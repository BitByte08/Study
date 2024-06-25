#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(void){
    int t; cin >> t;
    while(t--){
        int money=0;
        int h,m;
        scanf("%d:%d",&h,&m);
        int time; cin >> time;
        while(time>0){
            if((h>=22||h<3)&&time>300){
                while(h!=8){
                    h=(h+1)%24;
                    time-=60;
                }
                money+=5000;
                time+=m;
                m=0;
            }else{
                h=(h+1)%24;
                money+=1000;
                time-=60;
            }
        }
        cout << money << '\n';
    }
    return 0;
}

