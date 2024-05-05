#include <iostream>
#include <deque>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,temp,idx=0;
    deque<int> D;
    deque<int> D2;
    cin >> n;
    int i,j;
    for(i=0;i<n;i++){
        cin >> temp;
        D.push_back(temp);
        D2.push_back(i+1);
    }
    for(i=0;i<n;i++){
        temp = D.front();
        idx++;
        cout << D2.front() << ' ';
        D.pop_front();
        D2.pop_front();
        if (temp >= 0) {
            for (j = 0; j < temp - 1; j++) {
                D.push_back(D.front());
                D.pop_front();
                D2.push_back(D2.front());
                D2.pop_front();
            }
        }else{
            for (j = 0; j > temp; j--) {
                D.push_front(D.back());
                D.pop_back();
                D2.push_front(D2.back());
                D2.pop_back();
            }
        }

    }
    return 0;
}
