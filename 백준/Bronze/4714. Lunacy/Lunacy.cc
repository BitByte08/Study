#include <bits/stdc++.h>
using namespace std;
int main(void){
    while(true){
        double x; cin >> x;
        if(x < 0) return 0;
        printf("Objects weighing %.2f on Earth will weigh %.2f on the moon.\n", x, x * 0.167);
    }
}