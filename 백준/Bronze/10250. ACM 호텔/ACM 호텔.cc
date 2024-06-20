#include <iostream>
#include <cstdio>

using namespace std;

int main(void){
    int t; cin >> t;
    while(t--){
        int w,h,n; cin >> h >> w >> n;
        int x=n/h+1;
        int y=n%h;
        if (y==0) {
            y=h;
            x-=1;
        }
        printf("%d%02d\n",y,x);
    }
    return 0;
}