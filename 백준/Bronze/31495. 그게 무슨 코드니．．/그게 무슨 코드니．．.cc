#include <iostream>

int main(void){
  std::string n; getline(std::cin, n);
  if(n.length() <= 2 || !(n.front() == '\"' && n.back() == '\"')) {
    std::cout << "CE";
  }else {
    
    for(int i=1;i<n.length()-1;i++) {
      std::cout << n[i];
    }
  }
}