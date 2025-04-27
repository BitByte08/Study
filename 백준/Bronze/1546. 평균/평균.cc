#include <iostream>
#include <vector>
using namespace std;
int main(void){
    int n,m=0; cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
        m = max(v[i],m);
    }
    double sum = 0;
    for(int i=0;i<n;i++){
        sum += ((double)v[i]/(double)m)*100.0;
    }
    printf("%lf",(double)sum/(double)n);
}