#include <iostream>
using namespace std;
char USO[]= {'S','U','O'};
int main(void){
    int n; cin >> n;
    cout << USO[n%3];
    return 0;
}