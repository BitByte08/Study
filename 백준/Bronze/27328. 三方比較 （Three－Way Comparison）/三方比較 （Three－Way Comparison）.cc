#include <iostream>
using namespace std;
int main(void){
   int a, b; cin >> a >> b;
   cout << (a!=b)*(a>b?1:-1);
   return 0;
}
