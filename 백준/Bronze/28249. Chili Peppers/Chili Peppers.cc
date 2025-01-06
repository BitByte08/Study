#include <iostream>
int main(void) {
  int n,res=0; std::cin >> n;
  while (n--) {
    std::string s; std::cin >> s;
    if (s=="Poblano") res+=1500;
    if (s=="Mirasol")	res+=6000;
    if (s=="Serrano")	res+=15500;
    if (s=="Cayenne")	res+=40000;
    if (s=="Thai") res+=75000;
    if (s=="Habanero")	res+=125000;
  }
  std::cout << res;
  return 0;
}