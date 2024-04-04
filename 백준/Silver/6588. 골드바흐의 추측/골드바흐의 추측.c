#include <stdio.h>
#include <stdlib.h>
void prime_num(int *arr) {
    arr[0]=arr[1]=1;
    for(int i = 2; i<1000001; i++){
        for (int j = i*2; j < 1000001; j += i) {
            arr[j] = 1;
        }
    }
}
int main(void){
    long int n;
    int t=1;
    int *arr = (int*)calloc(1000001,sizeof(int));
    prime_num(arr);
    while(n!=0){
        t=1;
        scanf("%ld",&n);
        if(n==0){
            break;
        }
        for(int i=3;i<=n/2;i++){
            if(arr[i]==0){
                if(arr[n-i]==0){
                    printf("%d = %d + %d\n",n,i,n-i);
                    t=0;
                    break;
                }
            }
        }
        if(t){
            printf("Goldbach's conjecture is wrong.\n");
        }

    }
    return 0;
}