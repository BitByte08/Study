#include <iostream>

using namespace std;

unsigned long long int f(unsigned long long int a,unsigned long long int b){
    if(b==0){
        return a;
    }else{
        return f(b,a%b);
    }
}
int main(void){
    int n;
    cin >> n;
    unsigned long long int a,b;
    int i;
    for(i=0;i<n;i++) {
        cin >> a >> b;
        cout << (a * b)/ f(a, b) << '\n';
    }
    return 0;
}