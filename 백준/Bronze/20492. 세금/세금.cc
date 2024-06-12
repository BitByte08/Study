#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    cout << a-(a/100*22) << ' ' << a-((a/100*20)/100*22);
    return 0;
}