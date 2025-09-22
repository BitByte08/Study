#include <iostream>
using namespace std;
int arr[] = {3, 20, 120};
int main(void){
   int ma, mb, mc; cin >> ma >> mb >> mc;
   int la, lb, lc; cin >> la >> lb >> lc;
    if(ma*arr[0] + mb*arr[1] + mc*arr[2] == la*arr[0] + lb*arr[1] + lc*arr[2]){
        cout << "Draw"; return 0;
    }
   cout << (ma*arr[0] + mb*arr[1] + mc*arr[2] > la*arr[0] + lb*arr[1] + lc*arr[2] ? "Max" : "Mel");
   return 0;
}
