#include <iostream>
#include <vector>

using namespace std;

int main(void){
    int n;
    vector<int> tree;
    cin >> n;
    tree.push_back(n);
    while(tree.back()>=5){
        tree.push_back(tree.back()-5);
    }
    while(tree.back()<n){
        if(tree.back()%2==0) break;
        tree.pop_back();
    }
    while(tree.back()>=2){
        tree.push_back(tree.back()-2);
    }
    if(tree.back()!=0) cout << -1;
    else cout << tree.size()-1;
    return 0;
}