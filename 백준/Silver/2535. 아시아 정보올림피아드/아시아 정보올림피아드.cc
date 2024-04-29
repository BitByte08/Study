#include <iostream>

using namespace std;

typedef struct{
    int c;
    int num;
    int score;
}student;
int main(void){
    int n;
    cin >> n;
    int i,j;
    student list[n];
    for(i=0;i<n;i++){
        cin >> list[i].c >> list[i].num >> list[i].score;
    }
    int cu[(list[n-1].c)+1];
    for(i=1;i<=list[n-1].c;i++){
        cu[i]=0;
    }
    for(i=0;i<3;i++){
        int max=0,a;
        for(j=0;j<n;j++){
            if((list[j].score>max)&&(cu[list[j].c]<2)){
                max=list[j].score;
                a=j;
            }
        }
        cout << list[a].c << ' ' << list[a].num << endl;
        cu[list[a].c]+=1;
        //cout << cu[list[a].c] << '\n';
        list[a].score=0;
    }
    return 0;
}