#include <iostream>
using namespace std;
int main(void){
   int n; cin >> n;
   int cnt = 0;
   for(int i=0;i<n;i++){
        int temp; cin >> temp;
        cnt += temp % 2;
   }
   if(cnt<n-cnt){
        cout << "Happy";
   }else{
        cout << "Sad";
   }
   return 0;
}
