#include <iostream>

using namespace std;

int main(void){
    int n,m,i,j,b;
    cin >> n >> m >> b;
    int arr[n][m];
    int maxhight=0,mintime=1e9;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    for(int height=0;height<=256;height++){
        int inven = 0;
        int remove = 0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                int temp = arr[i][j]-height;
                if(temp<0) inven-=temp;
                else remove+=temp;
            }
        }
        if(remove+b>=inven){
            int time = remove*2+inven;
            if(mintime>=time){
                mintime=time;
                maxhight=height;
            }
        }
    }
    cout << mintime << " " << maxhight;
    return 0;
}