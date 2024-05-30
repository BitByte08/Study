#include <iostream>

using namespace std;

int main(){
    int temp,min=2001,res=0,i;
    for(i=0;i<3;i++){
        cin >> temp;
        if(min>temp){
            min = temp;
        }
    }
    res+=min;
    min = 2001;
    for(i=0;i<2;i++){
        cin >> temp;
        if(min>temp){
            min = temp;
        }
    }
    res+=min;
    cout << res-50;
    return 0;
}