#include <stdio.h>
/*
첫째 줄에 N (1 ≤ N ≤ 100)과 M (1 ≤ M ≤ 100)이 주어진다.

둘째 줄부터 M개의 줄에 걸쳐서 공을 넣는 방법이 주어진다. 각 방법은 세 정수 i j k로 이루어져 있으며, i번 바구니부터 j번 바구니까지에 k번 번호가 적혀져 있는 공을 넣는다는 뜻이다. 예를 들어, 2 5 6은 2번 바구니부터 5번 바구니까지에 6번 공을 넣는다는 뜻이다. (1 ≤ i ≤ j ≤ N, 1 ≤ k ≤ N)

도현이는 입력으로 주어진 순서대로 공을 넣는다.
*/
int main(void){
    int n,m,i,j,k,loop,loop2;
    scanf("%d %d",&n,&m);
    int arr[100] = {0};
    for(loop=1;loop<=m;loop++){
        scanf("%d %d %d",&i,&j,&k);
        for(loop2=i;loop2<=j;loop2++){
            arr[loop2] = k;
        }
    }
    for(loop=1;loop<=n;loop++){
        printf("%d ",arr[loop]);
    }
    return 0;
}
