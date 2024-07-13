#include <iostream>
#include <vector>

using namespace std;

int main() {
    int time[4][7];
    for(int i=1;i<=3;i++){
        for(int j = 1; j <= 6; j++){
            cin >> time[i][j];
        }
    }
    for (int i = 1; i <= 3; i++){
        int temp = (time[i][4] * 3600 + time[i][5] * 60 + time[i][6]) - (time[i][1] * 3600 + time[i][2] * 60 + time[i][3]);
        cout << temp/3600 << ' ';
        temp %= 3600;
        cout << temp /60 << ' ';
        temp %= 60;
        cout << temp << '\n';
    }
}
