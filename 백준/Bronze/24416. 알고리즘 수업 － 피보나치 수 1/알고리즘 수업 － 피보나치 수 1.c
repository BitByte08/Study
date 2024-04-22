#include <stdio.h>
int f[41];
int fib(int n) {
    if (n==1||n==2)
        return 1;
    else return (fib(n-1) + fib(n-2));
}
int main(void){
    int n;
    scanf("%d",&n);
    printf("%d %d", fib(n),n-2);
    return 0;
}