#include <iostream>
using namespace std;
int main(void){
    for(int i=1;;i++){
        string s; getline(cin, s);
        if(s == "0") break;
        printf("Case %d: Sorting... done!\n", i);
    }
}