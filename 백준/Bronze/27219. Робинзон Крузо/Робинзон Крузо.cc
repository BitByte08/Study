#include <iostream>
using namespace std;
char toRoman(int n){
   if(n==1) return 'I';
   if(n==5) return 'V';
   if(n==10) return 'X';
   if(n==50) return 'L';
   if(n==100) return 'C';
   if(n==500) return 'D';
   if(n==1000) return 'M';
}
int main(void){
   int n; cin >> n;
   //for(int i=0;i<n/1000;i++) cout << toRoman(1000); n%=1000;
   //for(int i=0;i<n/500;i++) cout << toRoman(500); n%=500;
   //for(int i=0;i<n/100;i++) cout << toRoman(100); n%=100;
   //for(int i=0;i<n/50;i++) cout << toRoman(50); n%=50;
   //for(int i=0;i<n/10;i++) cout << toRoman(10); n%=10;
   for(int i=0;i<n/5;i++) cout << toRoman(5); n%=5;
   for(int i=0;i<n/1;i++) cout << toRoman(1); n%=1;
   return 0;
}
