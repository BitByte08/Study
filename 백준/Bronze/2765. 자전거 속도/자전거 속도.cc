#include <bits/stdc++.h>
#define PI 3.14159265359
using namespace std;
int main(void){
    int t = 0;
    while(1) {
        t++;
        double a, b, c; cin >> a >> b >> c;
        if(!b) break;
        double temp = a / (5280.0 * 12.0)* b * PI;
        printf("Trip #%d: %.2f %.2f\n", t, temp, temp / c * 3600);
    }
}