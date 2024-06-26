#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>

using namespace std;

int comp(const void *a,const void *b){
    return *(double*)a-*(double*)b;
}
int main(void){
    int n; scanf("%d",&n);
    if(n==0){
        printf("0");
        return 0;
    }
    double v[n];
    for(int i=0;i<n;i++){
        double temp; scanf("%lf",&temp);
        v[i]=temp;
    }
    qsort(v,n,sizeof(double),comp);
    double size=n;
    double num=round(size*0.15);
    double resize=size-num*2;
    double res=0;
    for(int i=num;i<size-num;i++) {
        res += v[i];
    }
    res = round(res/resize);
    printf("%.0lf",res);
    return 0;
}

