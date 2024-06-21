#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(void){
    int k,d,a;
    scanf("%d/%d/%d",&k,&d,&a);
    if(k+a<d){
        cout << "hasu";
    }else if(d==0){
        cout << "hasu";
    }else{
        cout << "gosu";
    }
    return 0;
}

