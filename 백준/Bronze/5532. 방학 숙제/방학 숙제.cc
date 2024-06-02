#include <iostream>

using namespace std;

int main(void){
    int L,A,B,C,D;
    cin >> L >> A >> B >> C >> D;
    int korean = L - A/C;
    korean-=(A%C?1:0);
    int math = L - B/D;
    math-=(B%D?1:0);
    cout << (korean>math?math:korean);
    return 0;
}