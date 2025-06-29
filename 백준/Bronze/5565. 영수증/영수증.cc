#include <iostream>
using namespace std;
int main(void){
    int max_book_cnt = 0; cin >> max_book_cnt;
    for (int i=0;i<9;i++) {int temp; cin >> temp; max_book_cnt-=temp;}
    cout << max_book_cnt;
    return 0;
}