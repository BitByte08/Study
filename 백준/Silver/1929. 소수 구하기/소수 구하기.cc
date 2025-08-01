#include <cstdio>

int prime(int n) {
    if (n<2) return 0;
    for (int i=2;i*i<=n;i++) {
        if (n%i==0) return 0;
    }
    return 1;
}
int main(void) {
    int start, end; scanf("%d %d", &start, &end);
    for (int i=start; i<=end; i++) {
        if (prime(i)) printf("%d\n", i);
    }
    return 0;
}