#include <iostream>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int dx[4]={1,0,-1,0};
    int dy[4]={0,1,0,-1};

    int d,x,y,n,i,j,num;
    x=y=d=0;
    cin >> n >> num;
    int arr[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            arr[i][j]=0;
        }
    }
    int rx,ry;
    for(i=n*n;i>0;i--){
        arr[x][y]=i;
        if(i==num){
            rx=x;
            ry=y;
        }
        x+=dx[d];
        y+=dy[d];
        if(x<0||y<0||x>=n||y>=n||arr[x][y]){
            x-=dx[d];
            y-=dy[d];
            d=(d+1)%4;
            x+=dx[d];
            y+=dy[d];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    cout << rx+1 << ' ' << ry+1;
}