#include <iostream>

using namespace std;

int main(void){
    int n; cin >> n;
    int score=0,ans_score=0;
    bool ans;
    for(int i=0;i<n;i++){
        cin >> ans;
        if(ans){
            score++;
            ans_score+=score;
        }else{
            score=0;
        }
    }
    cout << ans_score;
    return 0;
}

