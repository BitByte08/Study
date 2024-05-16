#include <iostream>
#include <string>

using namespace std;

int main(void){
    int Left,Right,N;
    Left=Right=0;
    cin >> N;
    int i;
    for(i=0;i<N;i++){
        int temp;
        cin >> temp;
        if(temp==-1) Left++;
        else if(temp==1) Right++;
    }
    cout << (Left>Right?"Left":Left==Right?"Stay":"Right");
    return 0;
}