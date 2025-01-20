#include <cstdio>
int main(void) {
    int n, m, o; scanf("%d %d", &n, &m);
    int a, b; a=b=0;
    while (n--){
        scanf("%d", &o); a += o;
    }
    while (m--){
        scanf("%d", &o); b += o;
    }
    printf("%d", a - b);
}