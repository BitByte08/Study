#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void){
    stack<double> s;
    double alpha[26]={};
    string input;
    int a;
    double result=0;
    cin >> a >> input;
    int i;
    for(i=0;i<a;i++){
        cin >> alpha[i];
    }
    double temp;
    for(i=0;i<input.size();i++){
        if(input[i]>='A'&&input[i]<='Z'){
            s.push(alpha[input[i]-'A']);
        }else{
            result=0;
            temp=s.top();
            s.pop();
            if(input[i]=='*'){
                result=s.top()*temp;
            }else if(input[i]=='-'){
                result=s.top()-temp;
            }else if(input[i]=='+'){
                result=s.top()+temp;
            }else if(input[i]=='/'){
                result=s.top()/temp;
            }
            s.pop();
            s.push(result);
        }
    }
    printf("%.2lf",result);
    return 0;
}