#include <stdio.h>
/*
 첫째 줄에 N (1 ≤ N ≤ 100)과 M (1 ≤ M ≤ 100)이 주어진다.

 둘째 줄부터 M개의 줄에 걸쳐서 공을 교환할 방법이 주어진다. 각 방법은 두 정수 i j로 이루어져 있으며, i번 바구니와 j번 바구니에 들어있는 공을 교환한다는 뜻이다. (1 ≤ i ≤ j ≤ N)

 도현이는 입력으로 주어진 순서대로 공을 교환한다.
 */
int main(void){
    int n,m,a,b,i,temp;
    int arr[101] = {0};
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        arr[i] = i;
    }
    for(i=1;i<=m;i++){
        scanf("%d %d",&a,&b);
        temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }
    for(i=1;i<=n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
