#include <stdio.h>

int main(void) {
    int a, b, c; scanf("%d %d %d",&a,&b,&c);
    printf("%d", (c<a)||(b<=c)?0:1);
    return 0;
}