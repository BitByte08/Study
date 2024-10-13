/*
CU see you
:-) I’m happy
:-( I’m unhappy
;-)	wink
:-P	stick out my tongue
(~.~) sleepy
TA totally awesome
CCC Canadian Computing Competition
CUZ	because
TY thank-you
YW you’re welcome
TTYL talk to you later
 */
#include <iostream>
using namespace std;
// int main(void) {
//  for(int i=0;i<12;i++) {
//   string s; cin >> s;
//   string s2; getline(cin, s2);
//   cout << "if(n==\""<<s<<"\") cout << "<<s2<<";"<<'\n';
//  }
// }
int main(void) {
 while (true) {
  string n; cin >> n;
  if(n=="CU") cout <<  "see you";
  else if(n==":-)") cout <<  "I’m happy";
  else if(n==":-(") cout <<  "I’m unhappy";
  else if(n==";-)") cout << 	"wink";
  else if(n==":-P") cout << 	"stick out my tongue";
  else if(n=="(~.~)") cout <<  "sleepy";
  else if(n=="TA") cout <<  "totally awesome";
  else if(n=="CCC") cout <<  "Canadian Computing Competition";
  else if(n=="CUZ") cout << 	"because";
  else if(n=="TY") cout <<  "thank-you";
  else if(n=="YW") cout <<  "you’re welcome";
  else if(n=="TTYL") {cout <<  "talk to you later";break;}
  else cout << n;
  cout << '\n';
 }
 return 0;
}