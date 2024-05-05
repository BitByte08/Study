#include <iostream>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,temp;
    cin >> n >> m;
    int arr[1026][1026]={};
    int i,j;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            cin >> temp;
            arr[i][j]=arr[i][j-1]+arr[i-1][j]+temp-arr[i-1][j-1];
        }
    }
    int x1,x2,y1,y2;
    for(i=0;i<m;i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        cout << arr[x2][y2]-arr[x1-1][y2]-arr[x2][y1-1]+arr[x1-1][y1-1] << ' ';
    }
    return 0;
}