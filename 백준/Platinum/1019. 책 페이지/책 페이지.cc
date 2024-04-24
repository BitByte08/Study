#include <iostream>
#include <algorithm>
using namespace std;

int pages[10]={};
void f(int n,int ten){
    while(n>0){
        pages[n%10]+=ten;
        n/=10;
    }
}
void sub(int a,int b,int ten){
    while(a%10!=0&&a<=b){
        f(a,ten);
        a++;
    }
    if(a>b)return;
    while(b%10!=9&&b>=a){
        f(b,ten);
        b--;
    }
    int cnt=b/10-a/10+1;
    for(int i=0;i<10;i++){
        pages[i]+=cnt*ten;
    }
    sub(a/10,b/10,ten*10);
}
int main(void){
    int n;
    cin>>n;
    sub(1,n,1);
    for(int i=0;i<10;i++){
        cout<<pages[i]<<' ';
    }
    return 0;
}
