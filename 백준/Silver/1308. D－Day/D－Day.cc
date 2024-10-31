#include <iostream>
using namespace std;
int month[13] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int fun1(int year) {
    int ret = 0;
    if (year % 4 == 0) {
        ret = 1;
        if (year % 100 == 0) ret = 0;
        if (year % 400 == 0) ret = 1;
    }
    return ret;
}
int fun2(int y, int m) {
    int cnt = 0;
    for (int i = 1; i <= y; i++) {
        for (int j = 0; j < (i == y ? m - 1 : 12); j++) {
            cnt += month[j];
        }
        if (fun1(i)) cnt++;
    }
    if (fun1(y) == 1 && m < 3) --cnt;
    return cnt;
}
int main() {
    int y1, m1, d1, y2, m2, d2; cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
    if ((y2 - y1) == 1000) {
        if (m2 > m1){
            cout << "gg";
            return 0;
        }
        if (m2 == m1) {
            if (d2 >= d1) {
                cout << "gg";
                return 0;
            }
        }
    }
    else if ((y2 - y1) > 1000) {
        cout << "gg";
        return 0;
    }
    cout << "D-" << (fun2(y2, m2) + d2) - (fun2(y1, m1) + d1);
}
